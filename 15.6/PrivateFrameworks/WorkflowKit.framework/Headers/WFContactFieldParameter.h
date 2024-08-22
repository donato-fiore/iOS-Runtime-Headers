// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTACTFIELDPARAMETER_H
#define WFCONTACTFIELDPARAMETER_H

@class NSArray;


#import "WFParameter.h"

@interface WFContactFieldParameter : WFParameter

@property (readonly, nonatomic) BOOL allowsCustomHandles; // ivar: _allowsCustomHandles
@property (readonly, nonatomic) BOOL allowsTextEntry; // ivar: _allowsTextEntry
@property (readonly, nonatomic) NSInteger autocapitalizationType; // ivar: _autocapitalizationType
@property (readonly, nonatomic) NSInteger autocorrectionType; // ivar: _autocorrectionType
@property (readonly, nonatomic) BOOL hidesLabel; // ivar: _hidesLabel
@property (readonly, nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) NSArray *supportedContactProperties; // ivar: _supportedContactProperties
@property (readonly, nonatomic) NSInteger textAlignment; // ivar: _textAlignment


-(BOOL)displaysMultipleValueEditor;
-(BOOL)shouldAlignLabels;
-(Class)multipleStateClass;
-(Class)singleStateClass;
-(Class)stateClass;
-(id)initWithDefinition:(id)arg0 ;


@end


#endif