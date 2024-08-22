// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBEXTENSIONCONTEXTMENUITEMINFO_H
#define WBSWEBEXTENSIONCONTEXTMENUITEMINFO_H

@class NSDictionary, NSSet, NSArray, NSUUID, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionContextMenuItemInfo : NSObject {
    NSDictionary *_originalProperties;
}


@property (readonly, nonatomic) BOOL checked; // ivar: _checked
@property (readonly, copy, nonatomic) NSSet *contexts; // ivar: _contexts
@property (readonly, copy, nonatomic) NSArray *documentURLPatterns; // ivar: _documentURLPatterns
@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSUUID *extensionIdentifier; // ivar: _extensionIdentifier
@property (readonly, copy, nonatomic) NSObject<NSCopying> *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSObject<NSCopying> *parentIdentifier; // ivar: _parentIdentifier
@property (readonly, copy, nonatomic) NSArray *targetURLPatterns; // ivar: _targetURLPatterns
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) BOOL visible; // ivar: _visible


-(BOOL)_containsItemContextMatchingMenuContext:(id)arg0 contextTypes:(id)arg1 ;
-(BOOL)_itemContextType:(NSInteger)arg0 matchesMenuContext:(id)arg1 sourceURLMatchesTargetURLPatterns:(BOOL)arg2 linkURLMatchesTargetURLPatterns:(BOOL)arg3 ;
-(BOOL)canBeShownInContext:(id)arg0 ;
-(BOOL)canBeShownInContext:(id)arg0 inheritedContextTypes:(id)arg1 ;
-(id)_configureWithProperties:(id)arg0 ;
-(id)_titleForDisplayInContext:(id)arg0 ;
-(id)initWithProperties:(id)arg0 extensionIdentifier:(id)arg1 outErrorMessage:(*id)arg2 ;
-(id)itemInfoByTogglingCheckedState;
-(id)itemInfoByUpdatingProperties:(id)arg0 outErrorMessage:(*id)arg1 ;


@end


#endif