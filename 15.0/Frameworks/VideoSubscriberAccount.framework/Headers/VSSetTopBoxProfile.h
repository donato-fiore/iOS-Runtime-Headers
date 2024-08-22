// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSETTOPBOXPROFILE_H
#define VSSETTOPBOXPROFILE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VSSetTopBoxProfile : NSObject

@property (nonatomic) BOOL isDeveloper; // ivar: _isDeveloper
@property (retain, nonatomic) NSString *providerID; // ivar: _providerID
@property (retain, nonatomic) NSString *userToken; // ivar: _userToken


-(id)description;
-(id)initWithProviderID:(id)arg0 userToken:(id)arg1 isDeveloper:(BOOL)arg2 ;


@end


#endif