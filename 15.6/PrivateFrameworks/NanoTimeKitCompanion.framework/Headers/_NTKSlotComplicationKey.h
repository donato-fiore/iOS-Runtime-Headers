// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NTKSLOTCOMPLICATIONKEY_H
#define _NTKSLOTCOMPLICATIONKEY_H

@class NSUUID, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NTKComplication.h"

@interface _NTKSlotComplicationKey : NSObject <NSCopying>



@property (readonly) NTKComplication *complication; // ivar: _complication
@property (readonly) NSUUID *deviceUUID; // ivar: _deviceUUID
@property (readonly, copy) NSString *slot; // ivar: _slot


+(id)keyWithSlot:(id)arg0 complication:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif