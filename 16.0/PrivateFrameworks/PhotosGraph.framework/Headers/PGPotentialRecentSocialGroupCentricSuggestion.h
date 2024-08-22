// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGPOTENTIALRECENTSOCIALGROUPCENTRICSUGGESTION_H
#define PGPOTENTIALRECENTSOCIALGROUPCENTRICSUGGESTION_H

@class NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface PGPotentialRecentSocialGroupCentricSuggestion : NSObject

@property (retain, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, nonatomic) NSArray *momentLocalIdentifiers; // ivar: _momentLocalIdentifiers
@property (retain, nonatomic) NSDate *notSeenSinceDate; // ivar: _notSeenSinceDate
@property (readonly, nonatomic) NSArray *personLocalIdentifiers; // ivar: _personLocalIdentifiers
@property (readonly, nonatomic) NSArray *personWeights; // ivar: _personWeights
@property (readonly, nonatomic) float weight; // ivar: _weight


-(id)initWithPersonLocalIdentifiers:(id)arg0 personWeights:(id)arg1 momentLocalIdentifiers:(id)arg2 weight:(float)arg3 notSeenSinceDate:(id)arg4 ;


@end


#endif