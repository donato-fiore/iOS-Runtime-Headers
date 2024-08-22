// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECAGGREGATELOGGER_H
#define _DECAGGREGATELOGGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _DECAggregateLogger : NSObject {
    NSMutableDictionary *_batchScalars;
}




+(CGFloat)logKey:(id)arg0 blockTiming:(id)arg1 ;
+(void)logIncrementKey:(id)arg0 ;
+(void)logKey:(id)arg0 distValue:(CGFloat)arg1 ;
+(void)logKey:(id)arg0 replaceScalarValueWith:(NSInteger)arg1 ;
+(void)logKey:(id)arg0 scalarValue:(NSInteger)arg1 ;
+(void)logWithCallback:(id)arg0 ;
-(id)initCallbackInstance;
-(void)flush;
-(void)logIncrementKey:(id)arg0 ;
-(void)logKey:(id)arg0 distValue:(CGFloat)arg1 ;
-(void)logKey:(id)arg0 scalarValue:(NSInteger)arg1 ;


@end


#endif