// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MBMESSAGE_H
#define MBMESSAGE_H

@class NSArray, NSString, NSError, NSMutableDictionary;
@protocol NSKeyedArchiverDelegate, NSSecureCoding><NSCopying, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "MBConnection.h"

@interface MBMessage : NSObject <NSKeyedArchiverDelegate>



@property (readonly, nonatomic) NSArray *arguments;
@property (retain, nonatomic) MBConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *messageInfo; // ivar: _messageInfo
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (retain, nonatomic) NSObject<NSSecureCoding><NSCopying> *reply;
@property (retain, nonatomic) NSError *replyError;
@property (retain, nonatomic) NSMutableDictionary *replyInfo; // ivar: _replyInfo
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcObject; // ivar: _xpcObject


+(id)_allowedClasses;
+(id)messageWithName:(id)arg0 arguments:(id)arg1 ;
+(id)messageWithName:(id)arg0 arguments:(id)arg1 personaIdentifier:(id)arg2 ;
-(id)_initWithXPCObject:(id)arg0 ;
-(id)initWithName:(id)arg0 arguments:(id)arg1 ;
-(void)archiver:(id)arg0 didEncodeObject:(id)arg1 ;
-(void)sendReply;


@end


#endif