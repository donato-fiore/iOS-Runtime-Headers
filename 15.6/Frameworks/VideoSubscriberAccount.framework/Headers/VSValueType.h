// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSVALUETYPE_H
#define VSVALUETYPE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VSValueType : NSObject

@property (retain, nonatomic) Class implementationClass; // ivar: _implementationClass
@property (copy, nonatomic) NSArray *properties; // ivar: _properties


-(BOOL)isSuperclassAlsoValueType;


@end


#endif