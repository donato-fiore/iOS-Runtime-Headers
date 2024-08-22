// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SARESULTCALLBACK_H
#define SARESULTCALLBACK_H

@class NSArray, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAResultCallback : AceObject <SAAceSerializable>



@property (nonatomic) NSInteger code;
@property (copy, nonatomic) NSArray *commandReferences;
@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)resultCallback;
+(id)resultCallbackWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)groupIdentifier;


@end


#endif