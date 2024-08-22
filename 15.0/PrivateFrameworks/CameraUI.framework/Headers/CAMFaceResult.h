// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMFACERESULT_H
#define CAMFACERESULT_H

@class NSString, AVMetadataFaceObject, AVMetadataObject;
@protocol CAMMetadataObjectResult;

#import <Foundation/Foundation.h>


@interface CAMFaceResult : NSObject <CAMMetadataObjectResult>



@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *metadataType;
@property (readonly, nonatomic) CGFloat rollAngle; // ivar: _rollAngle
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger syntheticFocusMode;
@property (readonly, nonatomic) AVMetadataFaceObject *underlyingFaceObject; // ivar: _underlyingFaceObject
@property (readonly, nonatomic) AVMetadataObject *underlyingMetadataObject;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)burstMetadataRepresentation;
-(id)initWithFaceObject:(id)arg0 ;


@end


#endif