// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLRESOURCETYPESET_H
#define CPLRESOURCETYPESET_H


#import <Foundation/Foundation.h>


@interface CPLResourceTypeSet : NSObject {
    NSUInteger _baseTypesBits;
    NSUInteger _extraTypeBits;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;


-(BOOL)containsResourceType:(NSUInteger)arg0 ;
-(BOOL)intersectsWithSet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)intersectionWithSet:(id)arg0 ;
-(id)redactedDescription;
-(id)unionSet:(id)arg0 ;
-(void)addResourceType:(NSUInteger)arg0 ;
-(void)enumerateResourceTypesWithBlock:(id)arg0 ;
-(void)removeResourceType:(NSUInteger)arg0 ;


@end


#endif