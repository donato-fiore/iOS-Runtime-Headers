// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARREFERENCEOBJECT_H
#define ARREFERENCEOBJECT_H

@class NSSet, NSUUID, NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ARPointCloud.h"

@interface ARReferenceObject : NSObject <NSSecureCoding>

 {
    NSSet *_keyframes;
    ? _center;
    ? _extent;
}


@property ? center;
@property ? extent;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSSet *keyframes;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) ARPointCloud *rawFeaturePoints; // ivar: _rawFeaturePoints
@property (readonly, nonatomic) ? referenceOriginTransform; // ivar: _referenceOriginTransform
@property (readonly, nonatomic) NSString *resourceGroupName; // ivar: _resourceGroupName
@property ? scale;
@property (readonly, nonatomic) NSData *trackingData; // ivar: _trackingData
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(id)referenceObjectsInGroupNamed:(id)arg0 bundle:(id)arg1 ;
+(id)referenceObjectsInGroupNamed:(id)arg0 catalog:(id)arg1 ;
+(id)referenceObjectsInGroupNamed:(id)arg0 catalogName:(id)arg1 bundle:(id)arg2 ;
+(id)referenceObjectsInGroupNamed:(id)arg0 catalogURL:(id)arg1 ;
-(BOOL)exportObjectToURL:(id)arg0 previewImage:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)exportObjectToMemoryWithPreviewImage:(id)arg0 error:(*id)arg1 ;
-(id)initWithArchive:(id)arg0 name:(id)arg1 error:(*id)arg2 ;
-(id)initWithArchiveData:(id)arg0 name:(id)arg1 error:(*id)arg2 ;
-(id)initWithArchiveURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTrackingData:(id)arg0 referenceOriginTransform:(struct ? )arg1 ;
-(id)referenceObjectByApplyingTransform:(struct ? )arg0 ;
-(id)referenceObjectByMergingObject:(id)arg0 error:(*id)arg1 ;
-(id)writeToArchiveWithPreviewImage:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif