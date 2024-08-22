// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKDOMCONDITIONAL_H
#define IKDOMCONDITIONAL_H

@class NSSet, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "IKDOMElement.h"

@interface IKDOMConditional : NSObject

@property (readonly, copy, nonatomic) NSSet *dependentPathStrings; // ivar: _dependentPathStrings
@property (readonly, weak, nonatomic) IKDOMElement *domElement; // ivar: _domElement
@property (readonly, copy, nonatomic) NSArray *exclusionExpressions; // ivar: _exclusionExpressions
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *inclusionExpressions; // ivar: _inclusionExpressions


-(BOOL)passesForDataItem:(id)arg0 default:(BOOL)arg1 ;
-(id)initWithDOMElement:(id)arg0 ;
-(void)mutateWithDOMElement:(id)arg0 ;


@end


#endif