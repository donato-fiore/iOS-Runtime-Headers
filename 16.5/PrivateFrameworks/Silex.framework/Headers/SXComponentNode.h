// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTNODE_H
#define SXCOMPONENTNODE_H

@class NSString, NSMutableSet;

#import <Foundation/Foundation.h>


@interface SXComponentNode : NSObject {
    NSString *_componentIdentifier;
    NSInteger _attribute;
    NSMutableSet *_mutableDependencies;
    NSMutableSet *_toPositionDependencies;
    NSMutableSet *_toSizeDependencies;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif