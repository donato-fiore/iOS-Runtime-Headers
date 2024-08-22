// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSBOOKWIDGETDATA_H
#define BDSBOOKWIDGETDATA_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BDSBookWidgetData : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *assetID; // ivar: _assetID
@property (copy, nonatomic) NSString *coverURL; // ivar: _coverURL
@property (copy, nonatomic) NSString *libraryAssetType; // ivar: _libraryAssetType
@property (copy, nonatomic) NSString *pageProgressionDirection; // ivar: _pageProgressionDirection
@property (copy, nonatomic) NSNumber *readingProgress; // ivar: _readingProgress
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSNumber *totalDuration; // ivar: _totalDuration


+(BOOL)supportsSecureCoding;
-(BOOL)hasSignificantDifferenceWith:(id)arg0 ;
-(id)description;
-(id)initWithAssetID:(id)arg0 title:(id)arg1 pageProgressionDirection:(id)arg2 coverURL:(id)arg3 readingProgress:(id)arg4 libraryAssetType:(id)arg5 ;
-(id)initWithAssetID:(id)arg0 title:(id)arg1 pageProgressionDirection:(id)arg2 coverURL:(id)arg3 readingProgress:(id)arg4 totalDuration:(id)arg5 libraryAssetType:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif