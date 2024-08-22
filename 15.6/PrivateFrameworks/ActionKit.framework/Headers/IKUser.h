// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKUSER_H
#define IKUSER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IKUser : NSObject

@property (nonatomic, getter=isSubscribed) BOOL subscribed; // ivar: _subscribed
@property (nonatomic) NSUInteger userID; // ivar: _userID
@property (copy, nonatomic) NSString *username; // ivar: _username


-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif