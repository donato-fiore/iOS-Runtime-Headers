// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OFUIGRIDVIEWITEM_H
#define OFUIGRIDVIEWITEM_H

@class NSString;
@protocol OFUIWindowDraggingPasteboard;

#import <Foundation/Foundation.h>


@interface OFUIGridViewItem : NSObject <OFUIWindowDraggingPasteboard>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) id *object; // ivar: _object
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (readonly) Class superclass;


+(id)itemWithPasteboardItem:(id)arg0 ;
+(id)objectForPasteboadItem:(id)arg0 ;
-(id)init;
-(id)pasteboardItem;
-(void)dealloc;


@end


#endif