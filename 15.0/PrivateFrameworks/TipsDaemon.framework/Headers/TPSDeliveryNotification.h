// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSDELIVERYNOTIFICATION_H
#define TPSDELIVERYNOTIFICATION_H

@class TPSSerializableObject;
@protocol NSCopying;


#import "TPSDeliveryPrecondition.h"

@interface TPSDeliveryNotification : TPSSerializableObject <NSCopying>



@property (nonatomic) BOOL overrideOptOut; // ivar: _overrideOptOut
@property (retain, nonatomic) TPSDeliveryPrecondition *precondition; // ivar: _precondition
@property (nonatomic) BOOL suppress; // ivar: _suppress


+(id)notificationFromDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif