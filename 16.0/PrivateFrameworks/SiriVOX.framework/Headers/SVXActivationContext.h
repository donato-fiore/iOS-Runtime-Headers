// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXACTIVATIONCONTEXT_H
#define SVXACTIVATIONCONTEXT_H

@class AFRequestInfo, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SVXButtonEvent.h"
#import "SVXClientInfo.h"
#import "SVXSystemEvent.h"

@interface SVXActivationContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) SVXButtonEvent *buttonEvent; // ivar: _buttonEvent
@property (readonly, copy, nonatomic) SVXClientInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy, nonatomic) AFRequestInfo *requestInfo; // ivar: _requestInfo
@property (readonly, nonatomic) NSInteger source; // ivar: _source
@property (readonly, copy, nonatomic) SVXSystemEvent *systemEvent; // ivar: _systemEvent
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(NSInteger)arg0 timestamp:(NSUInteger)arg1 buttonEvent:(id)arg2 systemEvent:(id)arg3 clientInfo:(id)arg4 requestInfo:(id)arg5 userInfo:(id)arg6 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif