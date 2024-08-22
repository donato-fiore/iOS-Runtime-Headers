// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOMPONENTDEPENDENCYRESOLVER_H
#define SXCOMPONENTDEPENDENCYRESOLVER_H

@class NSArray, NSMutableArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface SXComponentDependencyResolver : NSObject {
    NSArray *_solvedComponentNodes;
    NSMutableArray *_componentNodes;
    NSDictionary *_mappedComponentNodes;
}




-(id)debugDescription;


@end


#endif