// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCORECONNECTMESSAGE_H
#define SUCORECONNECTMESSAGE_H

@class NSString, NSError, NSDictionary, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SUCoreConnectVersion.h"

@interface SUCoreConnectMessage : NSObject <NSSecureCoding>



@property (readonly, retain, nonatomic) NSString *clientID; // ivar: _clientID
@property (readonly, retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, retain, nonatomic) NSDictionary *message; // ivar: _message
@property (readonly, retain, nonatomic) NSString *messageName; // ivar: _messageName
@property (readonly, nonatomic) NSInteger messageType; // ivar: _messageType
@property (readonly, retain, nonatomic) SUCoreConnectVersion *version; // ivar: _version
@property (readonly, retain, nonatomic) NSSet *whitelistedClasses; // ivar: _whitelistedClasses


+(BOOL)supportsSecureCoding;
+(BOOL)validateMessageDictionary:(id)arg0 ;
+(id)nameForMessageType:(NSInteger)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 messageName:(id)arg1 clientID:(id)arg2 version:(id)arg3 message:(id)arg4 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif