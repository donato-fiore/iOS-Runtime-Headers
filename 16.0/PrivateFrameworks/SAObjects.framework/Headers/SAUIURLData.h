// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIURLDATA_H
#define SAUIURLDATA_H

@class NSData, NSString, NSURL;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUIURLData : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *uri;


+(id)uRLData;
+(id)uRLDataWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif