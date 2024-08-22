// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PHFETCHREQUESTWRAPPER_H
#define _PHFETCHREQUESTWRAPPER_H

@class NSManagedObjectID, NSSet, NSFetchRequest;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _PHFetchRequestWrapper : NSObject <NSCopying>



@property (readonly, nonatomic) NSManagedObjectID *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, nonatomic) NSSet *fetchPropertySets; // ivar: _fetchPropertySets
@property (readonly, nonatomic) NSFetchRequest *fetchRequest; // ivar: _fetchRequest
@property (readonly, nonatomic) NSUInteger hash; // ivar: _hash


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFetchRequest:(id)arg0 containerIdentifier:(id)arg1 fetchPropertySets:(id)arg2 ;


@end


#endif