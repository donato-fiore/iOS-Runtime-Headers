// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNMUTABLESOCIALPROFILE_H
#define CNMUTABLESOCIALPROFILE_H

@class NSArray, NSString;


#import "CNSocialProfile.h"

@interface CNMutableSocialProfile : CNSocialProfile

@property (copy, nonatomic) NSArray *bundleIdentifiers;
@property (copy, nonatomic) NSString *displayname;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *username;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)freeze;


@end


#endif