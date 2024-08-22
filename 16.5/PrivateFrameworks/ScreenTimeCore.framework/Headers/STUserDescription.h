// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STUSERDESCRIPTION_H
#define STUSERDESCRIPTION_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface STUserDescription : NSObject

@property (readonly, copy, nonatomic) NSString *familyName; // ivar: _familyName
@property (readonly, copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (readonly, copy, nonatomic) NSString *userAltDSID; // ivar: _userAltDSID
@property (readonly, copy, nonatomic) NSNumber *userDSID; // ivar: _userDSID


+(id)currentUser;
+(void)currentUserWithCompletion:(id)arg0 ;
-(id)initWithGivenName:(id)arg0 familyName:(id)arg1 userDSID:(id)arg2 userAltDSID:(id)arg3 ;


@end


#endif