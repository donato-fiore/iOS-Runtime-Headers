// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16SIRIAUDIOSUPPORT27PLAYMEDIAAPPSELECTIONOUTPUT_H
#define _TTC16SIRIAUDIOSUPPORT27PLAYMEDIAAPPSELECTIONOUTPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC16SiriAudioSupport27PlayMediaAppSelectionOutput : SwiftObject <MLFeatureProvider>

 {
    ? provider;
    ? $__lazy_storage_$_result_isRequestedApp;
    ? $__lazy_storage_$_result_isRequestedAppProbability;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif