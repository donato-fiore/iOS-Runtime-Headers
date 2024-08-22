// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSIRIINCOMINGCALL_H
#define AFSIRIINCOMINGCALL_H

@class NSString, NSArray, TUHandle;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AFSiriIncomingCall : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *callProviderBundleID; // ivar: _callProviderBundleID
@property (readonly, copy, nonatomic) NSString *callProviderIdentifier; // ivar: _callProviderIdentifier
@property (readonly, copy, nonatomic) NSString *callUUID; // ivar: _callUUID
@property (readonly, copy, nonatomic) NSArray *callerContactIdentifiers; // ivar: _callerContactIdentifiers
@property (readonly, nonatomic) TUHandle *handle; // ivar: _handle
@property (readonly, nonatomic) BOOL isCallerIDBlocked; // ivar: _isCallerIDBlocked
@property (readonly, nonatomic) BOOL isVideo; // ivar: _isVideo


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCallUUID:(id)arg0 callProviderIdentifier:(id)arg1 callProviderBundleID:(id)arg2 callerContactIdentifiers:(id)arg3 handle:(id)arg4 isVideo:(BOOL)arg5 isCallerIDBlocked:(BOOL)arg6 ;
-(id)initWithCallUUID:(id)arg0 callProviderIdentifier:(id)arg1 callProviderBundleID:(id)arg2 callers:(id)arg3 handle:(id)arg4 isVideo:(BOOL)arg5 isCallerIDBlocked:(BOOL)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif