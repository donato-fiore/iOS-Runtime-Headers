// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHARINGMESSAGE_H
#define PKSHARINGMESSAGE_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKSharingMessageDisplayInformation.h"

@interface PKSharingMessage : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKSharingMessageDisplayInformation *displayInformation; // ivar: _displayInformation
@property (nonatomic) NSUInteger format; // ivar: _format
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSData *payload; // ivar: _payload
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)embeddedMessageDictionaryForShareURL:(id)arg0 targetDevice:(NSInteger)arg1 ;
+(id)specializedMessageFromPayload:(id)arg0 displayInformation:(id)arg1 outError:(*id)arg2 ;
-(BOOL)configureWithContent:(id)arg0 ;
-(id)_initWithPayload:(id)arg0 format:(NSUInteger)arg1 type:(NSUInteger)arg2 displayInformation:(id)arg3 ;
-(id)description;
-(id)embeddedAddressForDeviceType:(NSInteger)arg0 ;
-(id)embeddedMessageURLs;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContent:(id)arg0 format:(NSUInteger)arg1 type:(NSUInteger)arg2 displayInformation:(id)arg3 ;
-(void)addEmbeddedMessages:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateMessageContentTo:(id)arg0 ;


@end


#endif