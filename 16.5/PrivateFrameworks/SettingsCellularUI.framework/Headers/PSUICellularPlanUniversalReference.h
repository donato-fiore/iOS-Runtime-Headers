// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUICELLULARPLANUNIVERSALREFERENCE_H
#define PSUICELLULARPLANUNIVERSALREFERENCE_H

@class NSString;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface PSUICellularPlanUniversalReference : NSObject <NSCopying, NSCoding>



@property (retain, nonatomic) NSString *iccid; // ivar: _iccid


+(id)referenceFromCellularPlanPendingTransfer:(id)arg0 ;
+(id)referenceFromDanglingPlanItem:(id)arg0 ;
+(id)referenceFromPlanItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getLogger;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIccid:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif