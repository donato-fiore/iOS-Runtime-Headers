// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTRANSITPARTNER_H
#define PKTRANSITPARTNER_H

@class NSString, NSURL, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKTransitPartner : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (nonatomic) NSInteger maxNotificationCount; // ivar: _maxNotificationCount
@property (readonly, copy, nonatomic) NSURL *purchaseURL; // ivar: _purchaseURL
@property (readonly, copy, nonatomic) NSSet *supportedTransitNetworkIdentifiers; // ivar: _supportedTransitNetworkIdentifiers


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 localizedDisplayName:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 localizedDisplayName:(id)arg1 purchaseURL:(id)arg2 supportedTransitNetworkIdentifiers:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif