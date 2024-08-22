// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKTIMEINTERVALS_H
#define FBKTIMEINTERVALS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface FBKTimeIntervals : NSObject

@property (retain, nonatomic) NSMutableDictionary *events; // ivar: _events


+(id)log;
+(id)sharedInstance;
-(id)didEndEvent:(NSUInteger)arg0 ;
-(id)didEndEvent:(NSUInteger)arg0 context:(id)arg1 ;
-(id)init;
-(id)keyForEvent:(NSUInteger)arg0 context:(id)arg1 ;
-(void)didStartEvent:(NSUInteger)arg0 ;
-(void)willStartEvent:(NSUInteger)arg0 context:(id)arg1 ;


@end


#endif