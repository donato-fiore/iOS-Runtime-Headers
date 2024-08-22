// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAVOICE_H
#define SAVOICE_H

@class NSString;


#import "SADomainObject.h"

@interface SAVoice : SADomainObject

@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageString;
@property (copy, nonatomic) NSString *masteredVersion;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *quality;
@property (nonatomic) NSInteger resourceContentVersion;
@property (copy, nonatomic) NSString *resourceMasteredVersion;
@property (nonatomic) NSInteger voiceContentVersion;
@property (copy, nonatomic) NSString *voiceType;


+(id)voice;
+(id)voiceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif