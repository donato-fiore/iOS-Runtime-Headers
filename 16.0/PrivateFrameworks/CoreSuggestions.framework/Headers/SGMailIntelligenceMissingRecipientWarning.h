// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMAILINTELLIGENCEMISSINGRECIPIENTWARNING_H
#define SGMAILINTELLIGENCEMISSINGRECIPIENTWARNING_H

@class NSString;


#import "SGMailIntelligenceComposeWarning.h"

@interface SGMailIntelligenceMissingRecipientWarning : SGMailIntelligenceComposeWarning

@property (readonly, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) NSString *matchFoundInBCC; // ivar: _matchFoundInBCC


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSnippet:(id)arg0 core:(id)arg1 handle:(id)arg2 signature:(id)arg3 detectedLanguage:(id)arg4 isIncomingMessage:(BOOL)arg5 score:(id)arg6 matchFoundInBCC:(id)arg7 ;
-(id)initWithSnippet:(id)arg0 core:(id)arg1 score:(id)arg2 matchFoundInBCC:(id)arg3 ;
-(id)initWithSnippet:(id)arg0 core:(id)arg1 signature:(id)arg2 detectedLanguage:(id)arg3 isIncomingMessage:(BOOL)arg4 score:(id)arg5 matchFoundInBCC:(id)arg6 ;
-(unsigned char)warningType;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif