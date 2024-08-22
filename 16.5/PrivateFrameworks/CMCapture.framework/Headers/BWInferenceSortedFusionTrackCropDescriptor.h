// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWINFERENCESORTEDFUSIONTRACKCROPDESCRIPTOR_H
#define BWINFERENCESORTEDFUSIONTRACKCROPDESCRIPTOR_H

@class NSString;
@protocol BWInferenceCropDescriptor;

#import <Foundation/Foundation.h>


@interface BWInferenceSortedFusionTrackCropDescriptor : NSObject <BWInferenceCropDescriptor>

 {
    char _identifier;
    int _orderedFusionTrackIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) char identifier;
@property (readonly) Class superclass;


-(BOOL)applicableToSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forMediaKey:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(char)arg0 orderedFusionTrackIndex:(int)arg1 ;
-(struct ? )maxCropForDimensions:(struct ? )arg0 ;
-(struct CGRect )rectForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif