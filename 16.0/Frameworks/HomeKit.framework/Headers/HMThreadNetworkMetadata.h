// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMTHREADNETWORKMETADATA_H
#define HMTHREADNETWORKMETADATA_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMThreadNetworkMetadata : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *PANID; // ivar: _PANID
@property (readonly, nonatomic) NSData *PSKc; // ivar: _PSKc
@property (readonly, nonatomic) unsigned char channel; // ivar: _channel
@property (readonly, nonatomic) NSData *extendedPANID; // ivar: _extendedPANID
@property (readonly, nonatomic) NSData *masterKey; // ivar: _masterKey
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *passPhrase; // ivar: _passPhrase


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 channel:(unsigned char)arg1 PANID:(id)arg2 extendedPANID:(id)arg3 masterKey:(id)arg4 passPhrase:(id)arg5 PSKc:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif