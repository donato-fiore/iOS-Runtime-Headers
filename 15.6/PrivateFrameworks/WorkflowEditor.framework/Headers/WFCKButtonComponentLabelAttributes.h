// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCKBUTTONCOMPONENTLABELATTRIBUTES_H
#define WFCKBUTTONCOMPONENTLABELATTRIBUTES_H


#import <Foundation/Foundation.h>


@interface WFCKButtonComponentLabelAttributes : NSObject {
    unordered_map<CKComponentViewAttribute, CKBoxedValue, std::hash<CKComponentViewAttribute>, std::equal_to<CKComponentViewAttribute>, std::allocator<std::pair<const CKComponentViewAttribute, CKBoxedValue>>> _attributes;
}




-(BOOL)isEqual:(id)arg0 ;


@end


#endif