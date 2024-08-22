// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCHASHER_H
#define ASCHASHER_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface ASCHasher : NSObject

@property (readonly, nonatomic) NSMutableData *buffer; // ivar: _buffer
@property (nonatomic) BOOL isFinalized; // ivar: _isFinalized


+(NSUInteger)executionSeed;
-(NSUInteger)finalizeHash;
-(id)init;
-(void)combineBool:(BOOL)arg0 ;
-(void)combineBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)combineDouble:(CGFloat)arg0 ;
-(void)combineInteger:(NSInteger)arg0 ;
-(void)combineObject:(id)arg0 ;
-(void)combineUnsignedInteger:(NSUInteger)arg0 ;


@end


#endif