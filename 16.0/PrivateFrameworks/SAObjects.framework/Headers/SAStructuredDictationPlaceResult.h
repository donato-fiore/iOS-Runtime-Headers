// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASTRUCTUREDDICTATIONPLACERESULT_H
#define SASTRUCTUREDDICTATIONPLACERESULT_H

@class NSString, NSData;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAStructuredDictationPlaceResult : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *placeResultType;
@property (copy, nonatomic) NSData *resultData;
@property (readonly) Class superclass;


+(id)structuredDictationPlaceResult;
+(id)structuredDictationPlaceResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif