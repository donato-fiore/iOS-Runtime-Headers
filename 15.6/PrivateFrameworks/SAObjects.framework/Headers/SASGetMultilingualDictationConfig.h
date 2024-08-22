// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASGETMULTILINGUALDICTATIONCONFIG_H
#define SASGETMULTILINGUALDICTATIONCONFIG_H

@class NSString, NSNumber;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SASGetMultilingualDictationConfig : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL multilingualDisabled;
@property (copy, nonatomic) NSNumber *multilingualTimeoutInMillis;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)getMultilingualDictationConfig;
+(id)getMultilingualDictationConfigWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif