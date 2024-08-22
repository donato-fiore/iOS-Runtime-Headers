// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ATXDISTRIBUTEDNOTIFICATION_H
#define _ATXDISTRIBUTEDNOTIFICATION_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface _ATXDistributedNotification : NSObject

@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualTo_ATXDistributedNotification:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithName:(id)arg0 userInfo:(id)arg1 ;


@end


#endif