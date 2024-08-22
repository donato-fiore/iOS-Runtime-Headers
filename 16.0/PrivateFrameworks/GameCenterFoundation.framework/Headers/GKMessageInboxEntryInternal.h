// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKMESSAGEINBOXENTRYINTERNAL_H
#define GKMESSAGEINBOXENTRYINTERNAL_H

@class NSString, NSURL;


#import "GKInternalRepresentation.h"

@interface GKMessageInboxEntryInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *contactID; // ivar: _contactID
@property (retain, nonatomic) NSString *contactName; // ivar: _contactName
@property (retain, nonatomic) NSString *friendCode; // ivar: _friendCode
@property (retain, nonatomic) NSString *senderAlias; // ivar: _senderAlias
@property (readonly, nonatomic) NSString *senderDisplayName;
@property (retain, nonatomic) NSString *senderHandle; // ivar: _senderHandle
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif