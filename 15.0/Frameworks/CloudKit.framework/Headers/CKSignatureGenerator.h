// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSIGNATUREGENERATOR_H
#define CKSIGNATUREGENERATOR_H


#import <Foundation/Foundation.h>


@interface CKSignatureGenerator : NSObject

@property (nonatomic) *void generator; // ivar: _generator
@property (nonatomic, getter=isValid) BOOL valid; // ivar: _valid


+(BOOL)isValidSignature:(id)arg0 ;
+(BOOL)isValidV2Signature:(id)arg0 ;
+(id)signatureForStreamingAsset;
+(id)signatureWithFileDescriptor:(int)arg0 error:(*id)arg1 ;
-(char *)_newSignatureByFinishingGenerator;
-(id)dataByFinishingSignature;
-(id)init;
-(void)dealloc;
-(void)updateWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)updateWithData:(id)arg0 ;


@end


#endif