// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWPOINTCLOUDFORMATREQUIREMENTS_H
#define BWPOINTCLOUDFORMATREQUIREMENTS_H

@class NSDictionary, NSArray;


#import "BWFormatRequirements.h"

@interface BWPointCloudFormatRequirements : BWFormatRequirements

@property (readonly, nonatomic) NSDictionary *dataBufferAttributes;
@property (nonatomic) NSUInteger dataBufferSize; // ivar: _dataBufferSize
@property (nonatomic) NSUInteger maxPoints; // ivar: _maxPoints
@property (nonatomic) BOOL memoryPoolUseAllowed; // ivar: _memoryPoolUseAllowed
@property (copy, nonatomic) NSArray *supportedDataFormats; // ivar: _supportedDataFormats


-(BOOL)isEqual:(id)arg0 ;
-(Class)formatClass;
-(id)description;
-(id)init;
-(unsigned int)mediaType;
-(void)dealloc;


@end


#endif