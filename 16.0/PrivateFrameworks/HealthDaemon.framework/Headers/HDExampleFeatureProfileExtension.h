// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDEXAMPLEFEATUREPROFILEEXTENSION_H
#define HDEXAMPLEFEATUREPROFILEEXTENSION_H

@class NSString;
@protocol HDFeatureAvailabilityExtensionProvider;

#import <Foundation/Foundation.h>

#import "HDFeatureAvailabilityManager.h"

@interface HDExampleFeatureProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider>

 {
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    NSString *_featureIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;


@end


#endif