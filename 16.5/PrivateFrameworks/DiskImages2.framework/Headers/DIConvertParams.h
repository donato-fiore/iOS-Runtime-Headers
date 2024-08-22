// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DICONVERTPARAMS_H
#define DICONVERTPARAMS_H



#import "DIBaseParams.h"
#import "DICreateParams.h"
#import "DIURL.h"

@interface DIConvertParams : DIBaseParams

@property (retain, nonatomic) DICreateParams *createParams; // ivar: _createParams
@property (nonatomic) NSUInteger encryptionMethod; // ivar: _encryptionMethod
@property (readonly, nonatomic) BOOL inPlaceConversion; // ivar: _inPlaceConversion
@property (nonatomic) NSUInteger maxRawUDIFRunSize; // ivar: _maxRawUDIFRunSize
@property (nonatomic) NSInteger outputFormat; // ivar: _outputFormat
@property (copy, nonatomic) DIURL *outputURL; // ivar: _outputURL
@property (nonatomic) NSUInteger sparseBundleBandSize; // ivar: _sparseBundleBandSize


+(BOOL)isUDIFWithFormat:(NSInteger)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)convertWithError:(*id)arg0 ;
-(BOOL)validateDeserializationWithError:(*id)arg0 ;
-(BOOL)validateFileWithURL:(id)arg0 error:(*id)arg1 ;
-(id)copyUpdatedOutputURLWithError:(*id)arg0 ;
-(id)initForInplaceWithExistingParams:(id)arg0 error:(*id)arg1 ;
-(id)initForInplaceWithURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInputURL:(id)arg0 outputURL:(id)arg1 error:(*id)arg2 ;
-(id)initWithInputURL:(id)arg0 outputURL:(id)arg1 shadowURLs:(id)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif