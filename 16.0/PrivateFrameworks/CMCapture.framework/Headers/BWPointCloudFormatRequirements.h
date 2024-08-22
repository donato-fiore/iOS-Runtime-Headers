// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWPOINTCLOUDFORMATREQUIREMENTS_H
#define BWPOINTCLOUDFORMATREQUIREMENTS_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;


#import "BWFormatRequirements.h"

@interface BWPointCloudFormatRequirements : BWFormatRequirements <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *dataBufferAttributes;
@property (nonatomic) NSUInteger dataBufferSize; // ivar: _dataBufferSize
@property (nonatomic) NSUInteger maxPoints; // ivar: _maxPoints
@property (nonatomic) BOOL memoryPoolUseAllowed; // ivar: _memoryPoolUseAllowed
@property (copy, nonatomic) NSArray *supportedDataFormats; // ivar: _supportedDataFormats


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)formatClass;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)mediaType;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif