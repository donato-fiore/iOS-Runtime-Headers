// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MADEMBEDDINGGENERATIONRESULT_H
#define MADEMBEDDINGGENERATIONRESULT_H

@class NSDate, NSData;


#import "MADResult.h"

@interface MADEmbeddingGenerationResult : MADResult

@property (readonly, retain, nonatomic) NSDate *assetCreationDate; // ivar: _assetCreationDate
@property (readonly, retain, nonatomic) NSData *checksum; // ivar: _checksum
@property (readonly, retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSUInteger embeddingType; // ivar: _embeddingType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmbeddingType:(NSUInteger)arg0 assetCreationDate:(id)arg1 data:(id)arg2 andChecksum:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif