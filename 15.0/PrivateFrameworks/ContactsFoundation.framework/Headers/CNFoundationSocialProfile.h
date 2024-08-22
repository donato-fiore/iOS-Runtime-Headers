// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNFOUNDATIONSOCIALPROFILE_H
#define CNFOUNDATIONSOCIALPROFILE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CNFoundationSocialProfile : NSObject <NSCopying>



@property (readonly, copy) NSString *displayName; // ivar: _displayName
@property (readonly, copy) NSString *service; // ivar: _service
@property (readonly, copy) NSString *urlString; // ivar: _urlString
@property (readonly, copy) NSString *userIdentifier; // ivar: _userIdentifier
@property (readonly, copy) NSString *username; // ivar: _username


+(id)emptySocialProfile;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithUrlString:(id)arg0 username:(id)arg1 userIdentifier:(id)arg2 service:(id)arg3 displayName:(id)arg4 ;


@end


#endif