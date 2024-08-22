// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NTKCOMPLICATIONCACHEKEY_H
#define _NTKCOMPLICATIONCACHEKEY_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NTKComplication.h"

@interface _NTKComplicationCacheKey : NSObject <NSCopying>



@property (readonly) NTKComplication *complication; // ivar: _complication
@property (readonly) NSUUID *deviceUUID; // ivar: _deviceUUID
@property (readonly) NSInteger family; // ivar: _family


+(id)keyWithFamily:(NSInteger)arg0 complication:(id)arg1 forDevice:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif