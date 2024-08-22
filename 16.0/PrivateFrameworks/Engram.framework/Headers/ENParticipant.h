// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENPARTICIPANT_H
#define ENPARTICIPANT_H

@class NSSet, NSArray;
@protocol NSSecureCoding, ENAccountPublicKey;

#import <Foundation/Foundation.h>


@interface ENParticipant : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<ENAccountPublicKey> *accountPublicKey; // ivar: _accountPublicKey
@property (retain, nonatomic) NSSet *aliases; // ivar: _aliases
@property (retain, nonatomic) NSArray *devices; // ivar: _devices
@property (readonly, nonatomic) BOOL supportsEngram;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)deviceWithIdentifier:(id)arg0 ;
-(id)initWithAccountPublicKey:(id)arg0 aliases:(id)arg1 devices:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif