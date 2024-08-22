// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSYNCMANAGEDCACHEDUSERREVIEW_H
#define MAPSSYNCMANAGEDCACHEDUSERREVIEW_H

@class NSManagedObject, NSDate, NSUUID;



@interface MapsSyncManagedCachedUserReview : NSManagedObject

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) NSInteger muid;
@property (nonatomic) int numberPhotosUploaded;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic) short rating;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif