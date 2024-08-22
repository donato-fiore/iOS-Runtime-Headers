// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDLMATERIALPROPERTYCONNECTION_H
#define MDLMATERIALPROPERTYCONNECTION_H

@class NSString;
@protocol MDLNamed;

#import <Foundation/Foundation.h>

#import "MDLMaterialProperty.h"

@interface MDLMaterialPropertyConnection : NSObject <MDLNamed>



@property (readonly, weak, nonatomic) MDLMaterialProperty *input; // ivar: _input
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, weak, nonatomic) MDLMaterialProperty *output; // ivar: _output


-(id)initWithOutput:(id)arg0 input:(id)arg1 ;


@end


#endif