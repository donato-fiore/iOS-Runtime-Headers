// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWDEFERREDPIPELINEPARAMETERS_H
#define BWDEFERREDPIPELINEPARAMETERS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BWDeferredPipelineParameters : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) int deepZoomVersion; // ivar: _deepZoomVersion
@property (nonatomic) int distortionCorrectionVersion; // ivar: _distortionCorrectionVersion
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled; // ivar: _geometricDistortionCorrectionEnabled
@property (nonatomic) BOOL intelligentDistortionCorrectionEnabled; // ivar: _intelligentDistortionCorrectionEnabled
@property (nonatomic) int nrfVersion; // ivar: _nrfVersion
@property (nonatomic) BOOL quadraProcessingSupportEnabled; // ivar: _quadraProcessingSupportEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif