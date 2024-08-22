// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSEVENTFOCUSDEFERRAL_H
#define BKSEVENTFOCUSDEFERRAL_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BKSEventFocusDeferralProperties.h"

@interface BKSEventFocusDeferral : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BKSEventFocusDeferralProperties *deferredProperties; // ivar: _deferredProperties
@property (readonly, nonatomic) BOOL isCycle;
@property (readonly, nonatomic) int priority; // ivar: _priority
@property (readonly, nonatomic) BKSEventFocusDeferralProperties *properties; // ivar: _properties


+(BOOL)supportsSecureCoding;
-(BOOL)defersProperties:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)conciseDescription;
-(id)deferredPropertiesForProperties:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProperties:(id)arg0 deferredProperties:(id)arg1 ;
-(id)initWithProperties:(id)arg0 deferredProperties:(id)arg1 withPriority:(int)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif