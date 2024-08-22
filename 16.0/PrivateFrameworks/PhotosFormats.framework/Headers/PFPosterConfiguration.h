// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFPOSTERCONFIGURATION_H
#define PFPOSTERCONFIGURATION_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying, PFPosterConfigurationAnalyticsSupport, PFParallaxLayoutConfiguration;

#import <Foundation/Foundation.h>

#import "PFPosterEditConfiguration.h"
#import "PFPosterShuffleConfiguration.h"

@interface PFPosterConfiguration : NSObject <NSSecureCoding, NSCopying, PFPosterConfigurationAnalyticsSupport>



@property (readonly, nonatomic) NSInteger configurationType; // ivar: _configurationType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PFPosterEditConfiguration *editConfiguration; // ivar: _editConfiguration
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<PFParallaxLayoutConfiguration> *layoutConfiguration; // ivar: _layoutConfiguration
@property (retain, nonatomic) NSArray *media; // ivar: _media
@property (nonatomic) NSInteger options; // ivar: _options
@property (readonly, nonatomic) NSInteger posterType;
@property (retain, nonatomic) PFPosterShuffleConfiguration *shuffleConfiguration; // ivar: _shuffleConfiguration
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)loadFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveToURL:(id)arg0 error:(*id)arg1 ;
-(id)analyticsPayload;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigurationType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif