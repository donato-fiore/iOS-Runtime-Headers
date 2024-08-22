// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OITSUCUSTOMFORMATCONDITION_H
#define OITSUCUSTOMFORMATCONDITION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "OITSUCustomFormatData.h"

@interface OITSUCustomFormatCondition : NSObject <NSCopying>



@property (readonly, nonatomic) int conditionType; // ivar: _conditionType
@property (readonly, nonatomic) CGFloat conditionValue; // ivar: _conditionValue
@property (readonly, nonatomic) OITSUCustomFormatData *data; // ivar: _data


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithType:(int)arg0 value:(CGFloat)arg1 data:(id)arg2 ;


@end


#endif