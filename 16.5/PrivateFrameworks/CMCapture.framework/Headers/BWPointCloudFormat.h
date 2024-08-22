// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWPOINTCLOUDFORMAT_H
#define BWPOINTCLOUDFORMAT_H

@class NSDictionary, NSString;
@protocol BWDataBufferBackedFormat;


#import "BWFormat.h"

@interface BWPointCloudFormat : BWFormat <BWDataBufferBackedFormat>



@property (readonly, nonatomic) NSDictionary *dataBufferAttributes; // ivar: _dataBufferAttributes
@property (readonly, nonatomic) NSUInteger dataBufferSize; // ivar: _dataBufferSize
@property (readonly, nonatomic) unsigned int dataFormat; // ivar: _dataFormat
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maxPoints; // ivar: _maxPoints
@property (readonly) Class superclass;


+(id)formatByResolvingRequirements:(id)arg0 ;
+(id)formatByResolvingRequirements:(id)arg0 printErrors:(BOOL)arg1 ;
+(void)initialize;
-(struct opaqueCMFormatDescription *)formatDescription;
-(unsigned int)mediaType;
-(void)dealloc;


@end


#endif