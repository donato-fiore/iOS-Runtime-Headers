// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PFCAMERAMETADATAAVMETADATAOBJECT_H
#define _PFCAMERAMETADATAAVMETADATAOBJECT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _PFCameraMetadataAVMetadataObject : NSObject

@property (readonly) CGRect bounds; // ivar: _bounds
@property (readonly) int confidence; // ivar: _confidence
@property (readonly) ? duration;
@property (readonly) ? time;
@property (readonly) NSString *type; // ivar: _type


+(id)catBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg0 ;
+(id)dogBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg0 ;
+(id)humanBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg0 ;
+(id)humanFaceObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg0 ;
+(id)objectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg0 type:(id)arg1 ;
+(id)salientObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg0 ;
-(id)initWithType:(id)arg0 bounds:(struct CGRect )arg1 confidence:(int)arg2 ;


@end


#endif