// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ENGROUPINFO_H
#define _ENGROUPINFO_H

@class NSArray, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ENAccountIdentity.h"

@interface _ENGroupInfo : NSObject <NSSecureCoding>



@property (retain) ENAccountIdentity *accountIdentity; // ivar: _accountIdentity
@property (retain, nonatomic) NSArray *participants; // ivar: _participants
@property (retain, nonatomic) NSData *sharedApplicationData; // ivar: _sharedApplicationData


+(BOOL)supportsSecureCoding;
-(id)initWithAccountIdentity:(id)arg0 paricipants:(id)arg1 sharedApplicationData:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif