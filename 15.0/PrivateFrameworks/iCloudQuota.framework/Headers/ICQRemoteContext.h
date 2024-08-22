// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQREMOTECONTEXT_H
#define ICQREMOTECONTEXT_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICQOffer.h"

@interface ICQRemoteContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *flowOptionsData; // ivar: _flowOptionsData
@property (readonly, nonatomic) ICQOffer *offer; // ivar: _offer
@property (readonly, nonatomic) NSData *preloadedRemoteUIData; // ivar: _preloadedRemoteUIData


+(BOOL)supportsSecureCoding;
+(id)ICQContextFromRemoteAlertContext:(id)arg0 ;
-(id)_serializedData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOffer:(id)arg0 flowOptionsData:(id)arg1 preloadedRemoteUIData:(id)arg2 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif