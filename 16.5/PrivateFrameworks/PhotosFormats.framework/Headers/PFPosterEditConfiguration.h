// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFPOSTEREDITCONFIGURATION_H
#define PFPOSTEREDITCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying, PFPosterConfigurationAnalyticsSupport;

#import <Foundation/Foundation.h>

#import "PFParallaxLayerStyle.h"

@interface PFPosterEditConfiguration : NSObject <NSSecureCoding, NSCopying, PFPosterConfigurationAnalyticsSupport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDepthEnabled; // ivar: _isDepthEnabled
@property (nonatomic) BOOL isPerspectiveZoomEnabled; // ivar: _isPerspectiveZoomEnabled
@property (nonatomic) CGRect normalizedVisibleFrame; // ivar: _normalizedVisibleFrame
@property (retain, nonatomic) PFParallaxLayerStyle *style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)analyticsPayload;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif