// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDSEPROTOTYPEMAPPING_H
#define IKDSEPROTOTYPEMAPPING_H

@class NSIndexSet;

#import <Foundation/Foundation.h>

#import "IKAppPrototypeIdentifier.h"
#import "IKViewElement.h"

@interface IKDSEPrototypeMapping : NSObject

@property (readonly, nonatomic) IKAppPrototypeIdentifier *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSIndexSet *usageIndexes; // ivar: _usageIndexes
@property (readonly, nonatomic) IKViewElement *viewElement; // ivar: _viewElement


+(id)prototypeMappingFromAppPrototype:(id)arg0 dataSourceElement:(id)arg1 elementFactory:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 viewElement:(id)arg1 usageIndexes:(id)arg2 ;


@end


#endif