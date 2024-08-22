// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSOBJCMETHOD_H
#define BSOBJCMETHOD_H

@class NSArray, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "BSObjCArgument.h"

@interface BSObjCMethod : NSObject <BSDescriptionProviding>

 {
    NSInteger _required;
}


@property (readonly, retain, nonatomic) NSArray *arguments; // ivar: _arguments
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *encoding; // ivar: _encoding
@property (readonly, retain, nonatomic) BSObjCArgument *firstArgument;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) BSObjCArgument *lastArgument;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, retain, nonatomic) BSObjCArgument *returnValue; // ivar: _returnValue
@property (readonly, nonatomic) SEL selector; // ivar: _selector
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif