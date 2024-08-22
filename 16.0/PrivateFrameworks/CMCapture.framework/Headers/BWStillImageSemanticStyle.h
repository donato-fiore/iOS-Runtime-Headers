// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTILLIMAGESEMANTICSTYLE_H
#define BWSTILLIMAGESEMANTICSTYLE_H

@class NSString;
@protocol IBPSemanticStyleProperties;

#import <Foundation/Foundation.h>


@interface BWStillImageSemanticStyle : NSObject <IBPSemanticStyleProperties>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) float toneBias; // ivar: _toneBias
@property (nonatomic) float warmthBias; // ivar: _warmthBias


-(id)initWithSemanticStyle:(id)arg0 ;


@end


#endif