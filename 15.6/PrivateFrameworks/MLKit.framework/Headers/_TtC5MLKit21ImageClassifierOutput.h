// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC5MLKIT21IMAGECLASSIFIEROUTPUT_H
#define _TTC5MLKIT21IMAGECLASSIFIEROUTPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC5MLKit21ImageClassifierOutput : SwiftObject <MLFeatureProvider>

 {
    ? provider;
    ? $__lazy_storage_$_classLabelProbs;
    ? $__lazy_storage_$_classLabel;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif