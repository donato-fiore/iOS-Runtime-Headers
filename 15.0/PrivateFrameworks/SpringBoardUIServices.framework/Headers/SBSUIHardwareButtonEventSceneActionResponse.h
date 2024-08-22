// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSUIHARDWAREBUTTONEVENTSCENEACTIONRESPONSE_H
#define SBSUIHARDWAREBUTTONEVENTSCENEACTIONRESPONSE_H

@class BSActionResponse;



@interface SBSUIHardwareButtonEventSceneActionResponse : BSActionResponse

@property (readonly, nonatomic) NSInteger buttonEventHandlingResult;


-(id)initWithButtonEventHandlingResult:(NSInteger)arg0 error:(id)arg1 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif