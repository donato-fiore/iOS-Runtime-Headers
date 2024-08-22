// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKDOMPROTOTYPE_H
#define IKDOMPROTOTYPE_H

@class NSArray, NSString;


#import "IKDOMConditional.h"
#import "_IKDOMPrototypeDerivationRules.h"

@interface IKDOMPrototype : IKDOMConditional {
    ? _flags;
}


@property (readonly, copy, nonatomic) NSArray *grouping; // ivar: _grouping
@property (readonly, copy, nonatomic) _IKDOMPrototypeDerivationRules *rules; // ivar: _rules
@property (readonly, copy, nonatomic) NSString *selector; // ivar: _selector
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(id)_groupingForDOMElement:(id)arg0 ;
+(id)prototypeWithDOMElement:(id)arg0 ;
-(id)_derivativeWithDataItem:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 selector:(id)arg1 ;
-(id)instantiateDOMElement;
-(id)variantForDataItem:(id)arg0 ;


@end


#endif