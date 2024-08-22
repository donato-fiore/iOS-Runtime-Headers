// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKNOTABLEUSERDATAACCOUNT_H
#define DKNOTABLEUSERDATAACCOUNT_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface DKNotableUserDataAccount : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) UIImage *profilePicture; // ivar: _profilePicture
@property (retain, nonatomic) NSString *username; // ivar: _username


-(id)initWithProfilePicture:(id)arg0 name:(id)arg1 username:(id)arg2 ;


@end


#endif