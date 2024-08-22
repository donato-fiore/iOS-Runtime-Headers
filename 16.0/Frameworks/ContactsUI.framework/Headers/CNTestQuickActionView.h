// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNTESTQUICKACTIONVIEW_H
#define CNTESTQUICKACTIONVIEW_H

@class UIView, NSString, NSMutableArray;
@protocol CNContactQuickActionPresentation;



@interface CNTestQuickActionView : UIView <CNContactQuickActionPresentation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *statesAssigned; // ivar: _statesAssigned
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSMutableArray *titlesAssigned; // ivar: _titlesAssigned


-(id)init;


@end


#endif