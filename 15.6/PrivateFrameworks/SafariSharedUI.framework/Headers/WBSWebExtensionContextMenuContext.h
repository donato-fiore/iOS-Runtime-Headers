// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSWEBEXTENSIONCONTEXTMENUCONTEXT_H
#define WBSWEBEXTENSIONCONTEXTMENUCONTEXT_H

@class NSUUID, NSNumber, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionContextMenuContext : NSObject

@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, nonatomic) BOOL editable; // ivar: _editable
@property (readonly, nonatomic) NSInteger elementMediaType; // ivar: _elementMediaType
@property (readonly, nonatomic) NSUUID *extensionIdentifier; // ivar: _extensionIdentifier
@property (readonly, nonatomic) NSNumber *frameID; // ivar: _frameID
@property (readonly, nonatomic) NSURL *frameURL; // ivar: _frameURL
@property (readonly, nonatomic, getter=isInSubframe) BOOL inSubframe;
@property (readonly, nonatomic, getter=isLink) BOOL link;
@property (readonly, nonatomic) NSURL *linkURL; // ivar: _linkURL
@property (readonly, nonatomic) NSURL *pageURL; // ivar: _pageURL
@property (readonly, copy, nonatomic) NSString *selectedText; // ivar: _selectedText
@property (readonly, nonatomic) BOOL shouldCollapseMultipleTopLevelItems; // ivar: _shouldCollapseMultipleTopLevelItems
@property (readonly, nonatomic) BOOL shouldMatchAllVisibleItems; // ivar: _shouldMatchAllVisibleItems
@property (readonly, nonatomic) NSURL *srcURL; // ivar: _srcURL
@property (readonly, nonatomic) CGFloat tabID; // ivar: _tabID
@property (readonly, nonatomic) NSInteger topLevelItemLimit; // ivar: _topLevelItemLimit


+(id)contextForActionContextMenuWithExtensionIdentifier:(id)arg0 tabID:(CGFloat)arg1 ;
+(id)contextForBrowserActionContextMenuWithExtensionIdentifier:(id)arg0 tabID:(CGFloat)arg1 ;
+(id)contextForPageActionContextMenuWithExtensionIdentifier:(id)arg0 tabID:(CGFloat)arg1 ;
+(id)contextForWebContentContextMenuInTabID:(CGFloat)arg0 frameID:(id)arg1 mediaType:(NSInteger)arg2 linkURL:(id)arg3 srcURL:(id)arg4 pageURL:(id)arg5 frameURL:(id)arg6 isEditable:(BOOL)arg7 selectedText:(id)arg8 ;
+(id)contextMatchingAllVisibleItems;
-(id)init;


@end


#endif