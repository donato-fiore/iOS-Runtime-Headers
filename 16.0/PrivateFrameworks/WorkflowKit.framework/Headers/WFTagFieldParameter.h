// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTAGFIELDPARAMETER_H
#define WFTAGFIELDPARAMETER_H

@class NSString, NSArray;


#import "WFParameter.h"

@interface WFTagFieldParameter : WFParameter

@property (readonly, nonatomic) NSString *autocapitalizationType; // ivar: _autocapitalizationType
@property (readonly, nonatomic) NSString *autocorrectionType; // ivar: _autocorrectionType
@property (readonly, nonatomic) NSString *keyboardType; // ivar: _keyboardType
@property (readonly, nonatomic) NSArray *suggestedTags; // ivar: _suggestedTags
@property (readonly, nonatomic) NSString *textAlignment; // ivar: _textAlignment


-(BOOL)shouldAlignLabels;
-(Class)singleStateClass;
-(id)initWithDefinition:(id)arg0 ;


@end


#endif