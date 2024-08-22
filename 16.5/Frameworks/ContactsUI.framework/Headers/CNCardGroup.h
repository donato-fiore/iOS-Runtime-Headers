// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCARDGROUP_H
#define CNCARDGROUP_H

@class NSMutableArray, NSArray, CNContact, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CNCardGroup : NSObject <NSCopying>

 {
    NSMutableArray *_items;
    NSArray *_actionItems;
}


@property (readonly, nonatomic) NSArray *actionItems;
@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (nonatomic) BOOL addSpacerFromPreviousGroup; // ivar: _addSpacerFromPreviousGroup
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) NSArray *displayItems;
@property (nonatomic) BOOL displaysDropdownMenu; // ivar: _displaysDropdownMenu
@property (readonly, nonatomic) NSArray *editingItems;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL useSplitActions; // ivar: _useSplitActions


+(id)groupForContact:(id)arg0 ;
-(SEL)unwrappedSelectorForAction:(id)arg0 ;
-(id)_loadActionItems;
// -(id)addActionWithTitle:(id)arg0 menuProvider:(id)arg1 destructive:(unk)arg2  ;
-(id)addActionWithTitle:(id)arg0 target:(id)arg1 selector:(SEL)arg2 ;
-(id)addActionWithTitle:(id)arg0 target:(id)arg1 selector:(SEL)arg2 destructive:(BOOL)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithContact:(id)arg0 ;
-(id)unwrappedTargetForAction:(id)arg0 ;
-(void)addAction:(id)arg0 withTitle:(id)arg1 ;
-(void)addAction:(id)arg0 withTitle:(id)arg1 color:(id)arg2 glyphColor:(id)arg3 transportType:(NSInteger)arg4 ;
-(void)addAction:(id)arg0 withTitle:(id)arg1 color:(id)arg2 glyphColor:(id)arg3 transportType:(NSInteger)arg4 wrapTitle:(BOOL)arg5 ;
-(void)addAction:(id)arg0 withTitle:(id)arg1 color:(id)arg2 transportType:(NSInteger)arg3 ;
-(void)addAction:(id)arg0 withTitle:(id)arg1 color:(id)arg2 transportType:(NSInteger)arg3 wrapTitle:(BOOL)arg4 ;
-(void)addAction:(id)arg0 withTitle:(id)arg1 wrapTitle:(BOOL)arg2 ;
-(void)removeActionWithTarget:(id)arg0 selector:(SEL)arg1 ;
-(void)removeActionWithTitle:(id)arg0 ;
-(void)removeAllActions;


@end


#endif