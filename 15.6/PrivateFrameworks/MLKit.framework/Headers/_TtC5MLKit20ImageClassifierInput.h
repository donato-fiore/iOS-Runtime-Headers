// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC5MLKIT20IMAGECLASSIFIERINPUT_H
#define _TTC5MLKIT20IMAGECLASSIFIERINPUT_H

@class SwiftObject, NSSet;
@protocol MLFeatureProvider;



@interface _TtC5MLKit20ImageClassifierInput : SwiftObject <MLFeatureProvider>

 {
    ? image;
}


@property (nonatomic, readonly) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;


@end


#endif