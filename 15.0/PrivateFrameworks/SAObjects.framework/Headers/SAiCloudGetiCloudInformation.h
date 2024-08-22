// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAICLOUDGETICLOUDINFORMATION_H
#define SAICLOUDGETICLOUDINFORMATION_H

@class NSString;


#import "SADomainCommand.h"

@interface SAiCloudGetiCloudInformation : SADomainCommand

@property (copy, nonatomic) NSString *query;


+(id)getiCloudInformation;
+(id)getiCloudInformationWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif