// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLEUSERFEEDBACKACTION_H
#define PXPEOPLEUSERFEEDBACKACTION_H

@class NSDictionary, PHUserFeedback;
@protocol PXFastEnumeration;


#import "PXPhotosAction.h"

@interface PXPeopleUserFeedbackAction : PXPhotosAction {
    id<PXFastEnumeration> *_collections;
}


@property (copy, nonatomic) NSDictionary *undoUserFeedbacks; // ivar: _undoUserFeedbacks
@property (readonly, nonatomic) PHUserFeedback *userFeedback; // ivar: _userFeedback


-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)collections;
-(id)initWithPeople:(id)arg0 feedbackType:(NSUInteger)arg1 ;
-(void)performAction:(id)arg0 ;
-(void)performRedo:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif