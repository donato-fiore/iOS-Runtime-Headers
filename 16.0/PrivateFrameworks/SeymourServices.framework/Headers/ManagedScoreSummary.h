// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDSCORESUMMARY_H
#define MANAGEDSCORESUMMARY_H

@class NSManagedObject;


#import "ManagedArchivedSession.h"

@interface ManagedScoreSummary : NSManagedObject

@property (nonatomic, retain) ManagedArchivedSession *archivedSession;
@property (nonatomic) float communityLowerMiddleScore;
@property (nonatomic) float communityLowerScore;
@property (nonatomic) float communityUpperMiddleScore;
@property (nonatomic) float communityUpperScore;
@property (nonatomic) int elapsedSeconds;
@property (nonatomic) float personalScore;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif