// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASPORTSENTITY_H
#define SASPORTSENTITY_H

@class NSURL, NSDictionary, NSString, NSArray;


#import "SADomainObject.h"
#import "SASportsLeague.h"
#import "SAUIAppPunchOut.h"

@interface SASportsEntity : SADomainObject

@property (copy, nonatomic) NSURL *image;
@property (copy, nonatomic) NSDictionary *images;
@property (copy, nonatomic) NSURL *largeImage;
@property (copy, nonatomic) NSDictionary *largeImages;
@property (retain, nonatomic) SASportsLeague *league;
@property (copy, nonatomic) NSURL *listImage;
@property (copy, nonatomic) NSDictionary *listImages;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAUIAppPunchOut *punchout;
@property (copy, nonatomic) NSArray *themeImages;


+(id)entity;
+(id)entityWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif