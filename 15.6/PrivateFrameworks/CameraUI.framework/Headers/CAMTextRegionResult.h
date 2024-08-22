// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMTEXTREGIONRESULT_H
#define CAMTEXTREGIONRESULT_H

@class AVMetadataTextRegionObject, NSString, AVMetadataObject;
@protocol CAMMetadataObjectResult;

#import <Foundation/Foundation.h>


@interface CAMTextRegionResult : NSObject <CAMMetadataObjectResult>



@property (retain, nonatomic) AVMetadataTextRegionObject *_metadataTextRegionObject; // ivar: __metadataTextRegionObject
@property (readonly, nonatomic) CGFloat baselineAngle; // ivar: _baselineAngle
@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) float confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *metadataType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger syntheticFocusMode;
@property (readonly, nonatomic) AVMetadataObject *underlyingMetadataObject;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(id)initWithTextRegionObject:(id)arg0 ;


@end


#endif