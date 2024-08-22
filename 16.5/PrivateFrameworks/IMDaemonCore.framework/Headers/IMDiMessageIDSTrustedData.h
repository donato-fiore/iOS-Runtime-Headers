// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDIMESSAGEIDSTRUSTEDDATA_H
#define IMDIMESSAGEIDSTRUSTEDDATA_H

@class NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IMDiMessageIDSTrustedData : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger command; // ivar: _command
@property (readonly, nonatomic) NSString *fromIdentifier; // ivar: _fromIdentifier
@property (readonly, nonatomic) NSString *fromPushID; // ivar: _fromPushID
@property (readonly, nonatomic) NSData *fromToken; // ivar: _fromToken
@property (readonly, nonatomic, getter=isFromTrustedSender) BOOL fromTrustedSender; // ivar: _fromTrustedSender
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) NSString *toIdentifier; // ivar: _toIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTopLevelMessage:(id)arg0 fromPushID:(id)arg1 messageContext:(id)arg2 ;


@end


#endif