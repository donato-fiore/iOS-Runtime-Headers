// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBINHERITANCECOLLECTION_H
#define RBINHERITANCECOLLECTION_H

@class NSDictionary, NSSet;
@protocol NSCopying, NSMutableCopying, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface RBInheritanceCollection : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration>

 {
    NSDictionary *_inheritancesByEnvironment;
    NSSet *_inheritances;
    NSSet *_namespaces;
}




+(id)collectionWithInheritances:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)_initWithCollection:(id)arg0 ;
-(id)_initWithInheritances:(id)arg0 ;
-(id)allEnvironments;
-(id)allInheritances;
-(id)allNamespaces;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)inheritancesForEnvironment:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif