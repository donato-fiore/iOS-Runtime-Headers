// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIRENTALEXPIRATIONLABEL_H
#define VUIRENTALEXPIRATIONLABEL_H

@class NSDate, NSTimer, NSString;
@protocol VUIRentalExpirationLabelDelegate;


#import "VUILabel.h"

@interface VUIRentalExpirationLabel : VUILabel

@property (nonatomic) BOOL contentIsAvailable; // ivar: _contentIsAvailable
@property (weak, nonatomic) NSObject<VUIRentalExpirationLabelDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) NSTimer *expiryUpdateTimer; // ivar: _expiryUpdateTimer
@property (nonatomic) BOOL forDownload; // ivar: _forDownload
@property (copy, nonatomic) NSString *locStringPrefix; // ivar: _locStringPrefix
@property (nonatomic) BOOL useWarningColor; // ivar: _useWarningColor


+(BOOL)shouldShowLabelForDownloadExpirationDate:(id)arg0 ;
+(id)_calculateExpirationStringForDate:(id)arg0 displayWarningColor:(*BOOL)arg1 updateInterval:(*NSInteger)arg2 locStringPrefix:(id)arg3 ;
+(id)calculateExpirationStringForDate:(id)arg0 updateInterval:(*NSInteger)arg1 locStringPrefix:(id)arg2 ;
+(id)labelForRentalExpirationDate:(id)arg0 downloadExpirationDate:(id)arg1 contentAvailabilityDate:(id)arg2 downloadStatus:(NSUInteger)arg3 ;
+(id)labelWithExpirationDate:(id)arg0 textLayout:(id)arg1 existingLabel:(id)arg2 locStringPrefix:(id)arg3 ;
+(id)labelWithExpirationDate:(id)arg0 textLayout:(id)arg1 existingLabel:(id)arg2 locStringPrefix:(id)arg3 forDownload:(BOOL)arg4 contentIsAvailable:(BOOL)arg5 ;
+(id)labelWithExpirationDate:(id)arg0 textLayout:(id)arg1 existingLabel:(id)arg2 locStringPrefix:(id)arg3 useWarningColor:(BOOL)arg4 ;
+(id)labelWithTextLayout:(id)arg0 existingLabel:(id)arg1 locStringPrefix:(id)arg2 ;
-(void)_computeExpirationLabel:(id)arg0 ;
-(void)dealloc;
-(void)invalidateTimer;
-(void)vui_willMoveToWindow:(id)arg0 ;


@end


#endif