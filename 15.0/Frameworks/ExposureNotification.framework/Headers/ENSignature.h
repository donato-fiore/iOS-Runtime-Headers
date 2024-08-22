// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENSIGNATURE_H
#define ENSIGNATURE_H

@class NSString, NSData;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface ENSignature : NSObject <CUXPCCodable>



@property (copy, nonatomic) NSString *androidBundleID; // ivar: _androidBundleID
@property (copy, nonatomic) NSString *appleBundleID; // ivar: _appleBundleID
@property (nonatomic) unsigned int batchCount; // ivar: _batchCount
@property (nonatomic) unsigned int batchNumber; // ivar: _batchNumber
@property (copy, nonatomic) NSString *keyID; // ivar: _keyID
@property (copy, nonatomic) NSString *keyVersion; // ivar: _keyVersion
@property (copy, nonatomic) NSString *signatureAlgorithm; // ivar: _signatureAlgorithm
@property (copy, nonatomic) NSData *signatureData; // ivar: _signatureData


-(BOOL)_encodeInfoWithProtobufCoder:(id)arg0 error:(*id)arg1 ;
-(BOOL)_readSignatureInfoPtr:(char *)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)encodeWithProtobufCoder:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithBytes:(char *)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif