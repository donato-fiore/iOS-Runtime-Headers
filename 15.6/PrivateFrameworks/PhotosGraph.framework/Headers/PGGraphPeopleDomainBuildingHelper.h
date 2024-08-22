// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHPEOPLEDOMAINBUILDINGHELPER_H
#define PGGRAPHPEOPLEDOMAINBUILDINGHELPER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PGGraphPeopleDomainBuildingHelper : NSObject {
    NSMutableDictionary *_insertedIdentifiedPersonByPersonLocalIdentifier;
}




-(id)init;
-(id)insertIdentifiedPersonWithPersonNode:(id)arg0 forPersonLocalIdentifier:(id)arg1 ;
-(id)insertedIdentifiedPersonForPersonLocalIdentifier:(id)arg0 ;


@end


#endif