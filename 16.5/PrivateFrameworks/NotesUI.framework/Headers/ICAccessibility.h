// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICACCESSIBILITY_H
#define ICACCESSIBILITY_H

@protocol ICAccessibilityExtras;

#import <Foundation/Foundation.h>


@interface ICAccessibility : NSObject <ICAccessibilityExtras>





+(id)sharedInstance;
-(BOOL)needsAccessibilityElements;
-(BOOL)shouldPerformLoggingForSwitchControl;
-(BOOL)shouldPerformLoggingForVoiceOver;
-(void)postAnnouncement:(id)arg0 withSender:(id)arg1 priority:(NSInteger)arg2 ;


@end


#endif