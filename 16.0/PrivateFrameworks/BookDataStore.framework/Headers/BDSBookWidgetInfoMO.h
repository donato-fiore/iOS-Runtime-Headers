// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSBOOKWIDGETINFOMO_H
#define BDSBOOKWIDGETINFOMO_H

@class NSManagedObject, NSString, NSDate, NSNumber;


#import "BCReadingNowDetail.h"

@interface BDSBookWidgetInfoMO : NSManagedObject

@property (copy, nonatomic) NSString *assetID;
@property (copy, nonatomic) NSString *cloudAssetType;
@property (copy, nonatomic) NSString *coverURL;
@property (nonatomic) BOOL isExplicit;
@property (readonly, nonatomic) BOOL isTrackedAsRecent;
@property (readonly, copy, nonatomic) NSDate *lastEngagedDate;
@property (copy, nonatomic) NSString *libraryContentAssetType;
@property (copy, nonatomic) NSString *pageProgressionDirection;
@property (retain, nonatomic) BCReadingNowDetail *readingNowDetail;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSNumber *totalDuration;


+(id)fetchRequest;
-(id)getBookWidgetInfoObject;
-(id)initIntoManagedObjectContext:(id)arg0 ;


@end


#endif