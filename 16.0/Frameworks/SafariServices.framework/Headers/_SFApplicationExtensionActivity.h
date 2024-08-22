// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFAPPLICATIONEXTENSIONACTIVITY_H
#define _SFAPPLICATIONEXTENSIONACTIVITY_H

@class UIApplicationExtensionActivity;



@interface _SFApplicationExtensionActivity : UIApplicationExtensionActivity

@property (copy, nonatomic) id *customCompletionHandler; // ivar: _customCompletionHandler


-(BOOL)validateExtensionHasSameContainerAsHostApp:(id)arg0 ;
-(void)activityDidFinish:(BOOL)arg0 items:(id)arg1 error:(id)arg2 ;


@end


#endif