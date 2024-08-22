// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFLANALYTICSSUBMITTER_H
#define PFLANALYTICSSUBMITTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PFLAnalyticsSubmitter : NSObject

@property (readonly, nonatomic) NSString *submitterId; // ivar: _submitterId


+(id)shared;
+(id)stringForKey:(NSUInteger)arg0 ;
-(id)init;
-(void)submitAnalyticsForKey:(NSUInteger)arg0 value:(id)arg1 ;


@end


#endif