// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHSIGNATUREBUFFER_H
#define SHSIGNATUREBUFFER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "SHSignature.h"

@interface SHSignatureBuffer : NSObject

@property (retain, nonatomic) NSMutableArray *allSignatures; // ivar: _allSignatures
@property (nonatomic) CGFloat maximumSignatureDuration; // ivar: _maximumSignatureDuration
@property (readonly, nonatomic) SHSignature *nextSignature;
@property (readonly, nonatomic) NSInteger qos; // ivar: _qos


-(BOOL)checkFlowError:(id)arg0 ;
-(BOOL)flow:(id)arg0 time:(id)arg1 error:(*id)arg2 ;
-(CGFloat)duration;
-(id)initWithMaximumSignatureDuration:(CGFloat)arg0 qos:(NSInteger)arg1 ;
-(void)discardAllSignaturesExceptTheLatestAfterMatchingID:(id)arg0 ;
-(void)discardOldestSignatureWithID:(id)arg0 ;
-(void)finishedMatchingSignatureWithID:(id)arg0 ;


@end


#endif