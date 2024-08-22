// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSSERVERMESSAGINGINCOMINGCONTEXT_H
#define IDSSERVERMESSAGINGINCOMINGCONTEXT_H

@class IDSCertifiedDeliveryContext, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSServerMessagingIncomingContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) IDSCertifiedDeliveryContext *certifiedDeliveryContext; // ivar: _certifiedDeliveryContext
@property (nonatomic) BOOL fromServerStorage; // ivar: _fromServerStorage
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFromServerStorage:(BOOL)arg0 certifiedDeliveryContext:(id)arg1 identifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif