// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOMPONENTDEPENDENCY_H
#define SXCOMPONENTDEPENDENCY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SXComponentDependencyDescriptor.h"

@interface SXComponentDependency : NSObject {
    NSString *_fromComponentIdentifier;
    NSString *_toComponentIdentifier;
    NSInteger _fromDependencyAttribute;
    NSInteger _toDependencyAttribute;
    SXComponentDependencyDescriptor *_descriptor;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif