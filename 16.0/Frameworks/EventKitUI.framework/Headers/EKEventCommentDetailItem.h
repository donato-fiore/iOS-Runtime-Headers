// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEVENTCOMMENTDETAILITEM_H
#define EKEVENTCOMMENTDETAILITEM_H

@class NSString;
@protocol UITextFieldDelegate;


#import "EKEventDetailItem.h"
#import "EKEventDetailCommentCell.h"

@interface EKEventCommentDetailItem : EKEventDetailItem <UITextFieldDelegate>

 {
    EKEventDetailCommentCell *_cell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)configureWithCalendar:(id)arg0 preview:(BOOL)arg1 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 forceUpdate:(BOOL)arg2 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(void)reset;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif