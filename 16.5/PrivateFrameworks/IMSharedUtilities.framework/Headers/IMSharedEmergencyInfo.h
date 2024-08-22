// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSHAREDEMERGENCYINFO_H
#define IMSHAREDEMERGENCYINFO_H

@class NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "IMSharedPersona.h"

@interface IMSharedEmergencyInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *conversationID; // ivar: _conversationID
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) IMSharedPersona *emergencyUserPersona; // ivar: _emergencyUserPersona
@property (readonly, nonatomic) NSInteger messageType; // ivar: _messageType
@property (readonly, nonatomic) IMSharedPersona *senderPersona; // ivar: _senderPersona


+(BOOL)supportsSecureCoding;
+(id)infoFromDictionary:(id)arg0 isStewieTranscriptSharingMessage:(*BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStewieUserPersona:(id)arg0 stewieUserPersona:(id)arg1 conversationID:(id)arg2 messageType:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif