// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFNUMBERFIELDPARAMETER_H
#define WFNUMBERFIELDPARAMETER_H

@class NSString;
@protocol WFParameterDialogProvider;


#import "WFParameter.h"

@interface WFNumberFieldParameter : WFParameter <WFParameterDialogProvider>



@property (readonly, nonatomic) BOOL allowsDecimalNumbers; // ivar: _allowsDecimalNumbers
@property (readonly, nonatomic) BOOL allowsNegativeNumbers; // ivar: _allowsNegativeNumbers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger textAlignment; // ivar: _textAlignment


+(BOOL)defaultAllowsDecimalNumbers;
+(BOOL)defaultAllowsNegativeNumbers;
-(BOOL)shouldAlignLabels;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(id)initWithDefinition:(id)arg0 ;
-(id)parameterStateFromDialogResponse:(id)arg0 ;
-(void)createDialogRequestWithAttribution:(id)arg0 defaultState:(id)arg1 prompt:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif