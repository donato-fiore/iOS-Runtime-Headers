// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACFSCRIPTURLINFORMATION_H
#define SACFSCRIPTURLINFORMATION_H

@class NSURL, NSDictionary, NSString;


#import "SABaseAceObject.h"

@interface SACFScriptUrlInformation : SABaseAceObject

@property (copy, nonatomic) NSURL *downloadUrl;
@property (copy, nonatomic) NSDictionary *headerFields;
@property (copy, nonatomic) NSString *requestMethodType;


+(id)scriptUrlInformation;
+(id)scriptUrlInformationWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif