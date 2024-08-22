// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTRUCTUREDDICTATIONADDRESSRESULT_H
#define SASTRUCTUREDDICTATIONADDRESSRESULT_H

@class NSString, NSURL, NSData;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAStructuredDictationAddressResult : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *addressLabel;
@property (copy, nonatomic) NSURL *contactId;
@property (copy, nonatomic) NSString *contactName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSData *forwardGeoProtobuf;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)structuredDictationAddressResult;
+(id)structuredDictationAddressResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif