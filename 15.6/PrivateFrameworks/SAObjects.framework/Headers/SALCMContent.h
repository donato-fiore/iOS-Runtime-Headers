// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SALCMCONTENT_H
#define SALCMCONTENT_H

@class NSString, NSURL;


#import "SADomainObject.h"

@interface SALCMContent : SADomainObject

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSURL *externalId;
@property (copy, nonatomic) NSString *title;


+(id)content;
+(id)contentWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif