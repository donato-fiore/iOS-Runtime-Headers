// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDISPLAYASSERTIONPREFERENCES_H
#define SBDISPLAYASSERTIONPREFERENCES_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SBExternalDisplayArrangementItem.h"
#import "SBDisplayPowerLogEntry.h"

@interface SBDisplayAssertionPreferences : NSObject <NSCopying>



@property (copy, nonatomic) NSString *disableSystemIdleSleepReason; // ivar: _disableSystemIdleSleepReason
@property (retain, nonatomic) SBExternalDisplayArrangementItem *displayArrangement; // ivar: _displayArrangement
@property (copy, nonatomic) SBDisplayPowerLogEntry *powerLogEntry; // ivar: _powerLogEntry
@property (nonatomic) BOOL wantsControlOfDisplay; // ivar: _wantsControlOfDisplay


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif