// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAHLSHOWACTIVITY_H
#define SAHLSHOWACTIVITY_H

@class NSString;


#import "SADomainCommand.h"

@interface SAHLShowActivity : SADomainCommand

@property (copy, nonatomic) NSString *activityDataType;
@property (copy, nonatomic) NSString *activityView;


+(id)showActivity;
+(id)showActivityWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif