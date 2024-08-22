// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARFACEDATA_H
#define ARFACEDATA_H

@class NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARFaceData : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *detectedFaces; // ivar: _detectedFaces
@property (retain, nonatomic) NSDictionary *faceMeshPayload; // ivar: _faceMeshPayload
@property (nonatomic, getter=isMirrored) BOOL mirrored; // ivar: _mirrored


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetadataObjects:(id)arg0 mirroredVideoInput:(BOOL)arg1 stripDetectionData:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif