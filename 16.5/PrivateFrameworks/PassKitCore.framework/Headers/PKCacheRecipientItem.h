// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCACHERECIPIENTITEM_H
#define PKCACHERECIPIENTITEM_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPeerPaymentRecipient.h"

@interface PKCacheRecipientItem : NSObject <NSSecureCoding>

 {
    NSDate *_insertDate;
}


@property (readonly, nonatomic) PKPeerPaymentRecipient *item; // ivar: _item


+(BOOL)supportsSecureCoding;
-(BOOL)hasExpired;
-(BOOL)isNewerThan:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif