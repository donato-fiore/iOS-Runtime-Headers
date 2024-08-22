// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMCONTINUITYCAPTUREDEVICECAPABILITIES_H
#define CMCONTINUITYCAPTUREDEVICECAPABILITIES_H

@class NSArray, NSString;
@protocol CMContinuityCaptureDictionaryRepresentable;

#import <Foundation/Foundation.h>


@interface CMContinuityCaptureDeviceCapabilities : NSObject <CMContinuityCaptureDictionaryRepresentable>



@property (readonly, nonatomic) NSArray *controls; // ivar: _controls
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger entityType; // ivar: _entityType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *streamFormats; // ivar: _streamFormats
@property (readonly) Class superclass;


+(BOOL)avcaptureDeviceSupportsStudioLighting:(id)arg0 ;
+(id)_resolvedControlsForEntityType:(NSInteger)arg0 ;
+(id)_resolvedStreamFormatsForEntityType:(NSInteger)arg0 ;
+(id)capabilitiesForEntityType:(NSInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithEntityType:(NSInteger)arg0 streamFormats:(id)arg1 controls:(id)arg2 ;


@end


#endif