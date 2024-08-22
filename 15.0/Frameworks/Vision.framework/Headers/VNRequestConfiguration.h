// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNREQUESTCONFIGURATION_H
#define VNREQUESTCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "VNProcessingDevice.h"

@interface VNRequestConfiguration : NSObject <NSCopying>



@property (nonatomic) NSUInteger detectionLevel; // ivar: _detectionLevel
@property (nonatomic) NSUInteger maximumProcessingDimensionOnTheLongSide; // ivar: _maximumProcessingDimensionOnTheLongSide
@property (nonatomic) NSUInteger metalContextPriority; // ivar: _metalContextPriority
@property (nonatomic) NSUInteger modelFileBackingStore; // ivar: _modelFileBackingStore
@property (nonatomic) BOOL preferBackgroundProcessing; // ivar: _preferBackgroundProcessing
@property (retain, nonatomic) VNProcessingDevice *processingDevice; // ivar: _processingDevice
@property (readonly, nonatomic) Class requestClass; // ivar: _requestClass
@property (readonly, copy, nonatomic) VNProcessingDevice *resolvedProcessingDevice;
@property (nonatomic) NSUInteger resolvedRevision; // ivar: _resolvedRevision


-(id)_allPropertyNames;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif