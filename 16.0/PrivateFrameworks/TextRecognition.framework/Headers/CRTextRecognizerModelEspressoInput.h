// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRTEXTRECOGNIZERMODELESPRESSOINPUT_H
#define CRTEXTRECOGNIZERMODELESPRESSOINPUT_H

@class NSString, NSArray;
@protocol CRTextRecognizerModelInput;

#import <Foundation/Foundation.h>


@interface CRTextRecognizerModelEspressoInput : NSObject <CRTextRecognizerModelInput>



@property NSUInteger batchSize; // ivar: _batchSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) vImage_Buffer img_input; // ivar: _img_input
@property (readonly) Class superclass;
@property (retain) NSArray *textFeatureInfo; // ivar: _textFeatureInfo


-(id)initWithImg_input:(struct vImage_Buffer )arg0 batchSize:(NSUInteger)arg1 featureInfo:(id)arg2 ;
-(void)dealloc;


@end


#endif