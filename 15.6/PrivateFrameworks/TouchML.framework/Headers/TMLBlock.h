// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TMLBLOCK_H
#define TMLBLOCK_H

@protocol TMLBlockJSExports;

#import <Foundation/Foundation.h>


@interface TMLBlock : NSObject <TMLBlockJSExports>

 {
    id *_block;
}


@property (readonly, nonatomic) id *blockValue;


+(id)blockWithFunction:(id)arg0 ;
+(id)blockWithFunction:(id)arg0 argumentsEncoding:(id)arg1 ;
+(id)createBlockForJSFunction:(id)arg0 argumentsEncoding:(id)arg1 ;
+(id)createBlockWithValueForJSFunction:(id)arg0 argumentsEncoding:(id)arg1 ;
+(void)callBlock:(id)arg0 arguments:(id)arg1 ;
+(void)initializeJSContext:(id)arg0 ;
-(id)initWithFunction:(id)arg0 argumentsEncoding:(id)arg1 ;
-(id)initWithFunctionWithValue:(id)arg0 argumentsEncoding:(id)arg1 ;
-(void)dealloc;


@end


#endif