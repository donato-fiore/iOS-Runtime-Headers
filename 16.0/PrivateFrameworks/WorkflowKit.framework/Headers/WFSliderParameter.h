// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSLIDERPARAMETER_H
#define WFSLIDERPARAMETER_H

@class WFImage, NSNumber;


#import "WFParameter.h"

@interface WFSliderParameter : WFParameter

@property (readonly, nonatomic) WFImage *maximumIcon;
@property (retain, nonatomic) NSNumber *maximumValue; // ivar: _maximumValue
@property (readonly, nonatomic) WFImage *minimumIcon;
@property (retain, nonatomic) NSNumber *minimumValue; // ivar: _minimumValue


-(BOOL)shouldAlignLabels;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedLabelWithState:(id)arg0 ;


@end


#endif