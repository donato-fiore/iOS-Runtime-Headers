// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPCOMPONENTOBJECTUUIDMAP_H
#define TSPCOMPONENTOBJECTUUIDMAP_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSPComponentObjectUUIDMap : NSObject <NSCopying, NSMutableCopying>

 {
    *void _identifierToUUIDMap;
    *void _uuidToIdentifierMap;
}


@property (readonly, nonatomic) NSUInteger count;


-(NSInteger)identifierForObjectUUID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComponentObjectUUIDMap:(id)arg0 ;
-(id)initWithMessage:(*void)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectUUIDForIdentifier:(NSInteger)arg0 ;
-(void)dealloc;
-(void)enumerateIdentifiersAndObjectUUIDsUsingBlock:(id)arg0 ;
-(void)saveToMessage:(*void)arg0 ;


@end


#endif