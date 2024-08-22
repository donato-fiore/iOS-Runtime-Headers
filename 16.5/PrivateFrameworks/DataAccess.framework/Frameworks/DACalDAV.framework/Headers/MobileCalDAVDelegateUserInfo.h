// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOBILECALDAVDELEGATEUSERINFO_H
#define MOBILECALDAVDELEGATEUSERINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MobileCalDAVDelegateUserInfo : NSObject

@property (nonatomic) BOOL allowWrite; // ivar: _allowWrite
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *principalPath; // ivar: _principalPath
@property (retain, nonatomic) NSString *uid; // ivar: _uid


+(id)infoFromCalDAVDetails:(id)arg0 allowWrite:(BOOL)arg1 ;
-(id)description;
-(id)initWithPrincipalPath:(id)arg0 displayName:(id)arg1 allowWrite:(BOOL)arg2 ;


@end


#endif