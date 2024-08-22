// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSSIGNINSERVICEUSERINFO_H
#define IDSSIGNINSERVICEUSERINFO_H


#import <Foundation/Foundation.h>


@interface IDSSignInServiceUserInfo : NSObject

@property (readonly, nonatomic) NSUInteger status; // ivar: _status
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)description;
-(id)initWithUserType:(NSUInteger)arg0 status:(NSUInteger)arg1 ;


@end


#endif