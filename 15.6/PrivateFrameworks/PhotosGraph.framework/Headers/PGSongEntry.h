// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSONGENTRY_H
#define PGSONGENTRY_H

@class NSManagedObject, NSString, NSNumber, NSData, NSDate, NSSet;



@interface PGSongEntry : NSManagedObject

@property (nonatomic, copy) NSString *adamID;
@property (nonatomic, copy) NSString *album;
@property (nonatomic, retain) NSNumber *arousal;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, copy) NSString *audioLocaleIdentifier;
@property (nonatomic, retain) NSNumber *clearedForPhotosMemoriesExport;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, copy) NSData *genreNamesAsData;
@property (nonatomic, retain) NSNumber *isExplicit;
@property (nonatomic, copy) NSDate *lastRefreshAttemptDate;
@property (nonatomic, copy) NSSet *playbackInfo;
@property (nonatomic, retain) NSNumber *preferenceScore;
@property (nonatomic, copy) NSSet *sources;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSNumber *unitagMemoryAppropriateScore;
@property (nonatomic, retain) NSNumber *unitagMemoryNotAppropriateScore;
@property (nonatomic, retain) NSNumber *valence;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif