// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPPTREQUESTACTION_H
#define UIPPTREQUESTACTION_H

@class BSAction;



@interface UIPPTRequestAction : BSAction



-(BOOL)shouldChangeOrientation;
-(NSInteger)UIActionType;
-(NSInteger)orientationRequested;
-(id)initWithDesiredOrientation:(NSInteger)arg0 ;


@end


#endif