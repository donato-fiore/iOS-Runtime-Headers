// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMINOREXPERIENCESPROFILEEXTENSION_H
#define HDMINOREXPERIENCESPROFILEEXTENSION_H

@class NSArray, NSString;
@protocol HDFeatureAvailabilityExtensionProvider;

#import <Foundation/Foundation.h>


@interface HDMinorExperiencesProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider>

 {
    NSArray *_minorExperiences;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;


@end


#endif