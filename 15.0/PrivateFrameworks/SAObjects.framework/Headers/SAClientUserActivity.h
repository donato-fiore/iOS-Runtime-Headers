// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SACLIENTUSERACTIVITY_H
#define SACLIENTUSERACTIVITY_H

@class NSArray, NSString, NSDictionary, NSURL;


#import "SAUserActivity.h"

@interface SAClientUserActivity : SAUserActivity

@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSArray *requiredUserInfoKeys;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSURL *webpageURL;


+(id)clientUserActivity;
+(id)clientUserActivityWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif