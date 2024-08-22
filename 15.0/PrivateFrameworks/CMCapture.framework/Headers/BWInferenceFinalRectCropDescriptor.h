// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCEFINALRECTCROPDESCRIPTOR_H
#define BWINFERENCEFINALRECTCROPDESCRIPTOR_H

@class NSString;
@protocol BWInferenceCropDescriptor;

#import <Foundation/Foundation.h>


@interface BWInferenceFinalRectCropDescriptor : NSObject <BWInferenceCropDescriptor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) char identifier;
@property (readonly) Class superclass;


-(BOOL)applicableToSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forMediaKey:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct ? )maxCropForDimensions:(struct ? )arg0 ;
-(struct CGRect )rectForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif