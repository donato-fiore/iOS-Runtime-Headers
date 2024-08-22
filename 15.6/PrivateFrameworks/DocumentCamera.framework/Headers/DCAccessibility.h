// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCACCESSIBILITY_H
#define DCACCESSIBILITY_H

@protocol DCAccessibilityExtras;

#import <Foundation/Foundation.h>


@interface DCAccessibility : NSObject <DCAccessibilityExtras>





+(id)sharedInstance;
-(BOOL)needsAccessibilityElements;
-(void)postAnnouncement:(id)arg0 withSender:(id)arg1 priority:(NSInteger)arg2 ;


@end


#endif