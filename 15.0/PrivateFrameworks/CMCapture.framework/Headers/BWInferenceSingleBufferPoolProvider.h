// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCESINGLEBUFFERPOOLPROVIDER_H
#define BWINFERENCESINGLEBUFFERPOOLPROVIDER_H

@class NSString;
@protocol BWInferencePixelBufferPoolProvider;

#import <Foundation/Foundation.h>


@interface BWInferenceSingleBufferPoolProvider : NSObject <BWInferencePixelBufferPoolProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg0 format:(id)arg1 ;


@end


#endif