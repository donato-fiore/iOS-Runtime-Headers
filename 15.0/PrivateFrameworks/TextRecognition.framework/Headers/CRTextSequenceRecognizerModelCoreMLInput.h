// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRTEXTSEQUENCERECOGNIZERMODELCOREMLINPUT_H
#define CRTEXTSEQUENCERECOGNIZERMODELCOREMLINPUT_H

@class NSString, NSSet, MLMultiArray, NSArray;
@protocol MLFeatureProvider, CRTextRecognizerModelInput;

#import <Foundation/Foundation.h>


@interface CRTextSequenceRecognizerModelCoreMLInput : NSObject <MLFeatureProvider, CRTextRecognizerModelInput>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MLMultiArray *img_input; // ivar: _img_input
@property (readonly) Class superclass;
@property (retain) NSArray *textFeatureInfo; // ivar: _textFeatureInfo


-(id)featureValueForName:(id)arg0 ;
-(id)initWithImg_input:(id)arg0 featureInfo:(id)arg1 ;


@end


#endif