// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDAUTOSUCONFIG_H
#define _CDAUTOSUCONFIG_H


#import <Foundation/Foundation.h>


@interface _CDAutoSuConfig : NSObject

@property (nonatomic) BOOL allowUnlockBeforeNow; // ivar: _allowUnlockBeforeNow
@property (nonatomic) BOOL alwaysFallBackToDefault; // ivar: _alwaysFallBackToDefault
@property (nonatomic) BOOL alwaysReturnUnlockNow; // ivar: _alwaysReturnUnlockNow
@property (nonatomic) CGFloat endThreshold; // ivar: _endThreshold
@property (nonatomic) int restrictionEndInSlot; // ivar: _restrictionEndInSlot
@property (nonatomic) int restrictionStartInSlot; // ivar: _restrictionStartInSlot
@property (nonatomic) CGFloat startThreshold; // ivar: _startThreshold
@property (nonatomic) int suEndDefaultTimeOffsetFromSuStart; // ivar: _suEndDefaultTimeOffsetFromSuStart
@property (nonatomic) int suStartDefaultTime; // ivar: _suStartDefaultTime
@property (nonatomic) int unlockMarginInSlot; // ivar: _unlockMarginInSlot
@property (nonatomic) CGFloat unlockThreshold; // ivar: _unlockThreshold


-(BOOL)validParam;
-(int)readConfig;
-(void)setParam;


@end


#endif