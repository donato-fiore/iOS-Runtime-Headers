// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MECOMPOSECONTEXT_H
#define MECOMPOSECONTEXT_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MEMessage.h"

@interface MEComposeContext : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger action; // ivar: _action
@property (retain, nonatomic) NSUUID *contextID; // ivar: _contextID
@property (nonatomic) BOOL isEncrypted; // ivar: _isEncrypted
@property (nonatomic) BOOL isSigned; // ivar: _isSigned
@property (retain, nonatomic) MEMessage *originalMessage; // ivar: _originalMessage
@property (nonatomic) BOOL shouldEncrypt; // ivar: _shouldEncrypt
@property (nonatomic) BOOL shouldSign; // ivar: _shouldSign


+(BOOL)supportsSecureCoding;
-(id)initWithAction:(NSInteger)arg0 originalMessage:(id)arg1 shouldSign:(BOOL)arg2 isSigned:(BOOL)arg3 shouldEncrypt:(BOOL)arg4 isEncrypted:(BOOL)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif