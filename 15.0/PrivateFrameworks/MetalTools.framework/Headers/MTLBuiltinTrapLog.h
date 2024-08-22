// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLBUILTINTRAPLOG_H
#define MTLBUILTINTRAPLOG_H

@class NSString, NSArray;
@protocol MTLFunctionLog, MTLFunction, MTLFunctionLogDebugLocation;

#import <Foundation/Foundation.h>


@interface MTLBuiltinTrapLog : NSObject <MTLFunctionLog>

 {
    id<MTLFunction> *_function;
    NSString *_encoderLabel;
    NSString *_functionName;
    NSArray *_stackTrace;
    unsigned int _encoderMethodIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<MTLFunctionLogDebugLocation> *debugLocation;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *encoderLabel;
@property (readonly, nonatomic) NSObject<MTLFunction> *function;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


-(id)initWithFunction:(id)arg0 encoderLabel:(id)arg1 encoderMethodIdentifier:(unsigned int)arg2 functionName:(id)arg3 stackTrace:(id)arg4 ;
-(void)dealloc;


@end


#endif