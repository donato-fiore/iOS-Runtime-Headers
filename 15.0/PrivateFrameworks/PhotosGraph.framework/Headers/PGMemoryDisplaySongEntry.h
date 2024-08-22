// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEMORYDISPLAYSONGENTRY_H
#define PGMEMORYDISPLAYSONGENTRY_H

@class NSManagedObject, NSString, NSNumber, NSDate, NSData;



@interface PGMemoryDisplaySongEntry : NSManagedObject

@property (nonatomic, copy) NSString *adamID;
@property (nonatomic, copy) NSString *album;
@property (nonatomic, retain) NSNumber *arousal;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, copy) NSString *artworkURLFormat;
@property (nonatomic, copy) NSDate *cacheDate;
@property (nonatomic, retain) NSNumber *clearedForPhotosMemoriesExport;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, copy) NSData *flexMLAnalysisAsData;
@property (nonatomic, copy) NSString *introPreviewPath;
@property (nonatomic, retain) NSNumber *isExplicit;
@property (nonatomic, retain) NSNumber *loudnessMainPeak;
@property (nonatomic, retain) NSNumber *loudnessMainValue;
@property (nonatomic, copy) NSString *songURLPath;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSNumber *valence;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif