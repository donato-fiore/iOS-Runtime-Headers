// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTASSETREADERCUSTOMCOMPOSITOR_H
#define PTASSETREADERCUSTOMCOMPOSITOR_H

@class NSString, NSDictionary;
@protocol AVVideoCompositing;

#import <Foundation/Foundation.h>


@interface PTAssetReaderCustomCompositor : NSObject <AVVideoCompositing>



@property (readonly, nonatomic) BOOL canConformColorOfSourceFrames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;


-(void)renderContextChanged:(id)arg0 ;
-(void)startVideoCompositionRequest:(id)arg0 ;


@end


#endif