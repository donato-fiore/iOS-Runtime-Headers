// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCESSIBILITY_H
#define PKACCESSIBILITY_H

@protocol PKAccessibilityExtras;

#import <Foundation/Foundation.h>


@interface PKAccessibility : NSObject <PKAccessibilityExtras>





+(id)sharedInstance;
-(BOOL)needsAccessibilityElements;
-(void)postAnnouncement:(id)arg0 withSender:(id)arg1 priority:(NSInteger)arg2 ;


@end


#endif