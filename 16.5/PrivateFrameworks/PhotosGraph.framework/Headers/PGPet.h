// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPET_H
#define PGPET_H

@class NSString, NSMutableSet;
@protocol PGGraphIngestPet;

#import <Foundation/Foundation.h>


@interface PGPet : NSObject <PGGraphIngestPet>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (readonly, nonatomic) NSMutableSet *momentNodes; // ivar: _momentNodes
@property (readonly, nonatomic) NSMutableSet *ownerNodes; // ivar: _ownerNodes
@property (readonly, nonatomic) NSUInteger species; // ivar: _species
@property (readonly) Class superclass;


-(id)initWithLocalIdentifier:(id)arg0 petSpecies:(NSUInteger)arg1 momentNodes:(id)arg2 ownerNodes:(id)arg3 ;


@end


#endif