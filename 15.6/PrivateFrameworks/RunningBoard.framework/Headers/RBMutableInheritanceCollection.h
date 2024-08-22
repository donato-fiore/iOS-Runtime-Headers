// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBMUTABLEINHERITANCECOLLECTION_H
#define RBMUTABLEINHERITANCECOLLECTION_H

@class NSCountedSet;


#import "RBInheritanceCollection.h"

@interface RBMutableInheritanceCollection : RBInheritanceCollection {
    NSCountedSet *_countedNamespaces;
}




+(id)collectionWithInheritances:(id)arg0 ;
-(id)_initWithCollection:(id)arg0 ;
-(id)allNamespaces;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addInheritance:(id)arg0 ;
-(void)removeInheritance:(id)arg0 ;
-(void)unionCollection:(id)arg0 ;


@end


#endif