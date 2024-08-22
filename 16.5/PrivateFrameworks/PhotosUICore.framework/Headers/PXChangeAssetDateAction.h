// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCHANGEASSETDATEACTION_H
#define PXCHANGEASSETDATEACTION_H

@class NSDate, NSDictionary, NSTimeZone;


#import "PXAssetsAction.h"

@interface PXChangeAssetDateAction : PXAssetsAction

@property (readonly, nonatomic) NSDate *changeDate; // ivar: _changeDate
@property (readonly, nonatomic) CGFloat dateOffset; // ivar: _dateOffset
@property (retain, nonatomic) NSDictionary *originalDateByLocalIdentifier; // ivar: _originalDateByLocalIdentifier
@property (retain, nonatomic) NSDictionary *originalTimeZoneByLocalIdentifier; // ivar: _originalTimeZoneByLocalIdentifier
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(id)_timeZoneForAsset:(id)arg0 ;
-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)initWithAssets:(id)arg0 date:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithAssets:(id)arg0 dateOffset:(CGFloat)arg1 timeZone:(id)arg2 ;
-(void)_setDate:(id)arg0 timeZone:(id)arg1 forAsset:(id)arg2 ;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif