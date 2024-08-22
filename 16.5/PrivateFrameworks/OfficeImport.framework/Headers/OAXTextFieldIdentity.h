// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OAXTEXTFIELDIDENTITY_H
#define OAXTEXTFIELDIDENTITY_H

@class NSString;


#import "OITSUPair.h"

@interface OAXTextFieldIdentity : OITSUPair

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSString *type;


+(id)identityWithGuid:(id)arg0 type:(id)arg1 ;


@end


#endif