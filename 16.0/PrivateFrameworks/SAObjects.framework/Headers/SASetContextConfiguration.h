// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETCONTEXTCONFIGURATION_H
#define SASETCONTEXTCONFIGURATION_H



#import "SABaseClientBoundCommand.h"

@interface SASetContextConfiguration : SABaseClientBoundCommand

@property (nonatomic) NSInteger contextTimeoutSeconds;


+(id)setContextConfiguration;
+(id)setContextConfigurationWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif