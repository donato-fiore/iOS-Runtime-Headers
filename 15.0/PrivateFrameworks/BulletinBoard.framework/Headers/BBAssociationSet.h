// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBASSOCIATIONSET_H
#define BBASSOCIATIONSET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BBAssociationSet : NSObject {
    NSString *_associationSetKey;
    NSUInteger _associatedObjectMemoryPointerFunction;
}




+(id)setWithStrongAssociation;
+(id)setWithWeakAssociation;
-(id)_initWithMemoryPointerFunction:(NSUInteger)arg0 ;
-(id)associatedObjectsForObject:(id)arg0 ;
-(void)associateObject:(id)arg0 withObject:(id)arg1 ;
-(void)copyAssociationsForObject:(id)arg0 toObject:(id)arg1 ;


@end


#endif