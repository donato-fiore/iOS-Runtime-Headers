// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFAILURENOTIFYINGTAPGESTURERECOGNIZER_H
#define SBFAILURENOTIFYINGTAPGESTURERECOGNIZER_H

@class UITapGestureRecognizer;
@protocol SBFailureNotifyingTapGestureRecognizerDelegate;



@interface SBFailureNotifyingTapGestureRecognizer : UITapGestureRecognizer

@property (weak, nonatomic) NSObject<SBFailureNotifyingTapGestureRecognizerDelegate> *delegate;


-(void)setState:(NSInteger)arg0 ;


@end


#endif