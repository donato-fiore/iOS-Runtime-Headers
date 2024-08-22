// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNDETECTSOUNDREQUEST_H
#define SNDETECTSOUNDREQUEST_H

@class NSString, MLModelConfiguration;
@protocol SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest;

#import <Foundation/Foundation.h>

#import "SNDetectorVariant.h"

@interface SNDetectSoundRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>

 {
    SNDetectorVariant *_detectorVariant;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MLModelConfiguration *modelConfiguration; // ivar: _modelConfiguration
@property (readonly, nonatomic) NSString *soundIdentifier; // ivar: _soundIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)allValidSoundIdentifiers;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDetectSoundRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createAnalyzerWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDetectorIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)initWithDetectorVariant:(id)arg0 soundIdentifier:(id)arg1 ;
-(id)initWithDetectorVariant:(id)arg0 soundIdentifier:(id)arg1 modelConfiguration:(id)arg2 ;
-(id)initWithSoundIdentifier:(id)arg0 ;
-(id)initWithSoundIdentifier:(id)arg0 shouldUseTwoPassDetection:(BOOL)arg1 ;
-(id)initWithVGGishBasedMLModel:(id)arg0 soundIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif