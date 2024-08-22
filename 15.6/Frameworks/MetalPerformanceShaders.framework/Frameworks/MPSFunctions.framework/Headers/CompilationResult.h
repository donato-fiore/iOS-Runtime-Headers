// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMPILATIONRESULT_H
#define COMPILATIONRESULT_H

@class NSError;
@protocol MTLFunction;

#import <Foundation/Foundation.h>


@interface CompilationResult : NSObject {
    *void _barrier;
    id<MTLFunction> *_function;
    NSError *_error;
}


@property (readonly, retain, nonatomic) NSError *error;
@property (readonly, retain, nonatomic) NSObject<MTLFunction> *function;


-(id)completionHandler:(SEL)arg0 ;
-(id)init;
-(id)initWithFunction:(id)arg0 error:(id)arg1 ;
-(void)dealloc;


@end


#endif