// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWINFERENCEPRIMARYCAPTURERECTDESCRIPTOR_H
#define BWINFERENCEPRIMARYCAPTURERECTDESCRIPTOR_H

@class NSString;
@protocol BWInferenceCropDescriptor;

#import <Foundation/Foundation.h>


@interface BWInferencePrimaryCaptureRectDescriptor : NSObject <BWInferenceCropDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) char identifier;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)applicableToSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forMediaKey:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct ? )maxCropForDimensions:(struct ? )arg0 ;
-(struct CGRect )rectForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif