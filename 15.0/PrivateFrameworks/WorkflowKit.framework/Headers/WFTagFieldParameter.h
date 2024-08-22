// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTAGFIELDPARAMETER_H
#define WFTAGFIELDPARAMETER_H

@class NSArray;


#import "WFParameter.h"

@interface WFTagFieldParameter : WFParameter

@property (readonly, nonatomic) NSInteger autocapitalizationType; // ivar: _autocapitalizationType
@property (readonly, nonatomic) NSInteger autocorrectionType; // ivar: _autocorrectionType
@property (readonly, nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (readonly, nonatomic) NSArray *suggestedTags; // ivar: _suggestedTags
@property (readonly, nonatomic) NSInteger textAlignment; // ivar: _textAlignment


-(BOOL)shouldAlignLabels;
-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg0 ;


@end


#endif