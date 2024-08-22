// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKMODALCONTAINERCLASSIFIERINPUT_H
#define WKMODALCONTAINERCLASSIFIERINPUT_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface WKModalContainerClassifierInput : NSObject <MLFeatureProvider>

 {
    RetainPtr<NSString> _canonicalInput;
}


@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithTokenizer:(id)arg0 rawInput:(id)arg1 ;


@end


#endif