// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFSHA256DIGESTOPERATION_H
#define _SFSHA256DIGESTOPERATION_H

@class NSString, NSData;
@protocol SFDigestOperationInternal, SFDigestOperation;

#import <Foundation/Foundation.h>


@interface _SFSHA256DigestOperation : NSObject <SFDigestOperationInternal, SFDigestOperation>

 {
    id *_sha256DigestOperationInternal;
}


@property (readonly, nonatomic, getter=_ccDigestInfo) *ccdigest_info ccDigestInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSData *hashValue;
@property (readonly, nonatomic, getter=_secKeyECDSAAlgorithm) *__CFString secKeyECDSAAlgorithm;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(NSInteger)blockSize;
+(NSInteger)outputSize;
+(id)digest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif