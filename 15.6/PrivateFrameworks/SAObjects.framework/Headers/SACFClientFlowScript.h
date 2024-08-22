// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACFCLIENTFLOWSCRIPT_H
#define SACFCLIENTFLOWSCRIPT_H

@class NSData, NSString;


#import "SABaseAceObject.h"
#import "SACFScriptEncryptionParameters.h"
#import "SACFScriptUrlInformation.h"

@interface SACFClientFlowScript : SABaseAceObject

@property (copy, nonatomic) NSData *compressedScript;
@property (retain, nonatomic) SACFScriptEncryptionParameters *encryptionParameters;
@property (copy, nonatomic) NSString *fileContentType;
@property (copy, nonatomic) NSString *jsScript;
@property (copy, nonatomic) NSData *jsScriptChecksum;
@property (copy, nonatomic) NSString *jsScriptIdentifier;
@property (nonatomic) BOOL shouldCacheScript;
@property (nonatomic) BOOL shouldSkipExecution;
@property (retain, nonatomic) SACFScriptUrlInformation *urlInformation;


+(id)clientFlowScript;
+(id)clientFlowScriptWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif