// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBBROWSERPASSKEY_H
#define WBSWEBBROWSERPASSKEY_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSWebBrowserPasskey : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *credentialID; // ivar: _credentialID
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *relyingParty; // ivar: _relyingParty
@property (readonly, nonatomic) NSData *userHandle; // ivar: _userHandle


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 relyingParty:(id)arg1 credentialID:(id)arg2 userHandle:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif