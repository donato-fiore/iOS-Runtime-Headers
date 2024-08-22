// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAACELISTRESULT_H
#define SAACELISTRESULT_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "SABaseAceObject.h"

@interface SAAceListResult : SABaseAceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *result;
@property (readonly) Class superclass;


+(id)aceListResult;
+(id)aceListResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif