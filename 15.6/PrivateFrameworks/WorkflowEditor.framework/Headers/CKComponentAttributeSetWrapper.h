// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOMPONENTATTRIBUTESETWRAPPER_H
#define CKCOMPONENTATTRIBUTESETWRAPPER_H


#import <Foundation/Foundation.h>


@interface CKComponentAttributeSetWrapper : NSObject {
    shared_ptr<const std::unordered_map<CKComponentViewAttribute, CKBoxedValue>> _attributes;
}






@end


#endif