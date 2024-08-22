// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSBACKLIGHTFEATURES_H
#define BKSBACKLIGHTFEATURES_H

@class NSString;
@protocol BSProtobufSerializable;

#import <Foundation/Foundation.h>


@interface BKSBacklightFeatures : NSObject <BSProtobufSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableFeatures; // ivar: _disableFeatures
@property (nonatomic) float fixedBrightnessLevelWhileDisabled; // ivar: _fixedBrightnessLevelWhileDisabled
@property (nonatomic) float fixedBrightnessNitsWhileDisabled; // ivar: _fixedBrightnessNitsWhileDisabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)protobufSchema;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)didFinishProtobufDecodingWithError:(*id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif