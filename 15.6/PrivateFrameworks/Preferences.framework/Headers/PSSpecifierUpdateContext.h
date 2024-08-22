// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSSPECIFIERUPDATECONTEXT_H
#define PSSPECIFIERUPDATECONTEXT_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PSSpecifierUpdateContext : NSObject <NSCopying>



@property (nonatomic) BOOL animated; // ivar: _animated
@property (nonatomic) BOOL updateModelOnly; // ivar: _updateModelOnly
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)context;
+(id)contextWithUserInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif