// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSBOOKWIDGETINFO_H
#define BDSBOOKWIDGETINFO_H

@class NSString, NSDate, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BDSBookWidgetInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *assetID; // ivar: _assetID
@property (copy, nonatomic) NSString *cloudAssetType; // ivar: _cloudAssetType
@property (copy, nonatomic) NSString *coverURL; // ivar: _coverURL
@property (nonatomic) BOOL isExplicit; // ivar: _isExplicit
@property (readonly, nonatomic) BOOL isTrackedAsRecent; // ivar: _isTrackedAsRecent
@property (readonly, nonatomic) NSDate *lastEngagedDate; // ivar: _lastEngagedDate
@property (copy, nonatomic) NSString *libraryContentAssetType; // ivar: _libraryContentAssetType
@property (copy, nonatomic) NSString *pageProgressionDirection; // ivar: _pageProgressionDirection
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSNumber *totalDuration; // ivar: _totalDuration


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAssetID:(id)arg0 ;
-(id)initWithAssetID:(id)arg0 title:(id)arg1 coverURL:(id)arg2 pageProgressionDirection:(id)arg3 cloudAssetType:(id)arg4 libraryContentAssetType:(id)arg5 ;
-(id)initWithAssetID:(id)arg0 title:(id)arg1 coverURL:(id)arg2 pageProgressionDirection:(id)arg3 cloudAssetType:(id)arg4 libraryContentAssetType:(id)arg5 lastEngagedDate:(id)arg6 isTrackedAsRecent:(BOOL)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(id)insertMatchingManagedObjectIntoContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif