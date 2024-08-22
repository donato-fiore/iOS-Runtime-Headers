// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ININTENTKEYPARAMETER_H
#define ININTENTKEYPARAMETER_H


#import <Foundation/Foundation.h>

#import "INCodableAttribute.h"
#import "INImage.h"

@interface INIntentKeyParameter : NSObject

@property (readonly, nonatomic) INCodableAttribute *codableAttribute; // ivar: _codableAttribute
@property (readonly, nonatomic) INImage *image; // ivar: _image
@property (readonly, nonatomic) id *value; // ivar: _value


-(id)initWithCodableAttribute:(id)arg0 value:(id)arg1 image:(id)arg2 ;


@end


#endif