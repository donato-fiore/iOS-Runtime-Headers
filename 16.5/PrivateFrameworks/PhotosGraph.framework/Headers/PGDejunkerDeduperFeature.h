// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGDEJUNKERDEDUPERFEATURE_H
#define PGDEJUNKERDEDUPERFEATURE_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PGDejunkerDeduperFeature : NSObject <NSCopying>



@property (readonly) BOOL hasPeopleScenes;
@property (readonly) BOOL hasPersons;
@property (readonly) BOOL isVideo; // ivar: _isVideo
@property (readonly) NSSet *peopleScenes; // ivar: _peopleScenes
@property (readonly) NSSet *personLocalIdentifiers; // ivar: _personLocalIdentifiers


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)identicalSimilarity;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPersonLocalIdentifiers:(id)arg0 peopleScenes:(id)arg1 isVideo:(BOOL)arg2 ;


@end


#endif