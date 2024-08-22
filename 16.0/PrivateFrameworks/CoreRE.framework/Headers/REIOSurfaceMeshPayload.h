// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REIOSURFACEMESHPAYLOAD_H
#define REIOSURFACEMESHPAYLOAD_H

@class NSArray, IOSurface;
@protocol REMeshPayload;


#import "RESharedResourcePayload.h"
#import "RESerializedPayload.h"

@interface REIOSurfaceMeshPayload : RESharedResourcePayload <REMeshPayload>



@property (readonly, nonatomic) NSUInteger bufferSize;
@property (readonly, nonatomic) NSArray *instances; // ivar: _instances
@property (readonly, nonatomic) IOSurface *ioSurface; // ivar: _ioSurface
@property (readonly, nonatomic) NSArray *models; // ivar: _models
@property (readonly, nonatomic) NSArray *parts; // ivar: _parts
@property (retain, nonatomic) RESerializedPayload *serializedData; // ivar: serializedData
@property (copy, nonatomic) id *serializedDataBlock; // ivar: serializedDataBlock
@property (readonly, nonatomic, getter=isShareable) BOOL shareable;


+(BOOL)supportsSecureCoding;
-(BOOL)hasSameUnderlyingIOSurface:(id)arg0 ;
-(id)bufferWithDevice:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIOSurface:(id)arg0 parts:(id)arg1 models:(id)arg2 instances:(id)arg3 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif