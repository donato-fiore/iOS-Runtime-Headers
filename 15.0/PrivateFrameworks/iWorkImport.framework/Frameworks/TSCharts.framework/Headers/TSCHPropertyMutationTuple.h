// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHPROPERTYMUTATIONTUPLE_H
#define TSCHPROPERTYMUTATIONTUPLE_H

@class NSDictionary;
@protocol TSCHStyleOwning;

#import <Foundation/Foundation.h>


@interface TSCHPropertyMutationTuple : NSObject

@property (readonly) NSDictionary *mutations; // ivar: _mutations
@property (readonly) NSObject<TSCHStyleOwning> *styleOwner; // ivar: _styleOwner


-(id)description;
-(id)indirectTuple;
-(id)initWithStyleOwner:(id)arg0 mutationMap:(id)arg1 ;
-(id)initWithStyleOwner:(id)arg0 mutations:(id)arg1 ;


@end


#endif