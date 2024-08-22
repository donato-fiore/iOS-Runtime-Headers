// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPHASHBUILDER_H
#define TPHASHBUILDER_H


#import <Foundation/Foundation.h>


@interface TPHashBuilder : NSObject

@property (nonatomic) NSInteger algo; // ivar: _algo
@property (nonatomic) CC_SHA256state_st ctxSHA256; // ivar: _ctxSHA256
@property (nonatomic) CC_SHA512state_st ctxSHA512; // ivar: _ctxSHA512


+(NSInteger)algoOfHash:(id)arg0 ;
+(id)hashWithAlgo:(NSInteger)arg0 ofBytes:(*void)arg1 len:(NSUInteger)arg2 ;
+(id)hashWithAlgo:(NSInteger)arg0 ofData:(id)arg1 ;
-(id)finalHash;
-(id)init;
-(id)initWithAlgo:(NSInteger)arg0 ;
-(void)resetWithAlgo:(NSInteger)arg0 ;
-(void)throwInvalidAlgo;
-(void)updateWithBytes:(*void)arg0 len:(NSUInteger)arg1 ;
-(void)updateWithData:(id)arg0 ;


@end


#endif