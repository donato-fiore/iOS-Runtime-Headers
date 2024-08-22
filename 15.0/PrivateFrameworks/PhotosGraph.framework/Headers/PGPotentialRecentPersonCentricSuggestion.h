// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPOTENTIALRECENTPERSONCENTRICSUGGESTION_H
#define PGPOTENTIALRECENTPERSONCENTRICSUGGESTION_H

@class NSArray, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface PGPotentialRecentPersonCentricSuggestion : NSObject

@property (readonly, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, nonatomic) NSDate *notSeenSinceDate; // ivar: _notSeenSinceDate
@property (readonly, nonatomic) NSString *personLocalIdentifier; // ivar: _personLocalIdentifier
@property (readonly, nonatomic) NSUInteger relationshipScore; // ivar: _relationshipScore


-(id)initWithPersonLocalIdentifier:(id)arg0 assets:(id)arg1 notSeenSinceDate:(id)arg2 ;
-(id)initWithPersonLocalIdentifier:(id)arg0 assets:(id)arg1 relationshipScore:(NSUInteger)arg2 ;


@end


#endif