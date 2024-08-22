// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSSETTOPBOXPROFILE_H
#define VSSETTOPBOXPROFILE_H

@class NSDate, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VSSetTopBoxProfile : NSObject <NSCopying>



@property (retain, nonatomic) NSDate *activationTime; // ivar: _activationTime
@property (nonatomic) BOOL isDeveloper; // ivar: _isDeveloper
@property (retain, nonatomic) NSString *providerID; // ivar: _providerID
@property (retain, nonatomic) NSString *userToken; // ivar: _userToken


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProviderID:(id)arg0 userToken:(id)arg1 activationTime:(id)arg2 isDeveloper:(BOOL)arg3 ;


@end


#endif