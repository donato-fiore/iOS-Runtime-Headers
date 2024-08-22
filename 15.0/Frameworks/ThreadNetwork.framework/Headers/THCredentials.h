// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef THCREDENTIALS_H
#define THCREDENTIALS_H

@class NSData, NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface THCredentials : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *PSKC; // ivar: _PSKC
@property (readonly, nonatomic) NSData *activeOperationalDataSet; // ivar: _activeOperationalDataSet
@property (readonly, nonatomic) NSData *borderAgentID; // ivar: _borderAgentID
@property (nonatomic) unsigned char channel; // ivar: _channel
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSData *extendedPANID; // ivar: _extendedPANID
@property (readonly, nonatomic) NSDate *lastModificationDate; // ivar: _lastModificationDate
@property (readonly, nonatomic) NSData *networkKey; // ivar: _networkKey
@property (readonly, nonatomic) NSString *networkName; // ivar: _networkName
@property (readonly, nonatomic) NSData *panID; // ivar: _panID


+(BOOL)supportsSecureCoding;
-(id)initThreadCredentials:(id)arg0 extendedPANID:(id)arg1 borderAgentID:(id)arg2 activeOperationalDataSet:(id)arg3 PSKC:(id)arg4 networkKey:(id)arg5 channel:(unsigned char)arg6 panID:(id)arg7 creationDate:(id)arg8 lastModificationDate:(id)arg9 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif