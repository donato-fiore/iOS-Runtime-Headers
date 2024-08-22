// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SABACKGROUNDUPDATEREQUEST_H
#define SABACKGROUNDUPDATEREQUEST_H

@protocol SAAceSerializable;


#import "SAStartRequest.h"

@interface SABackgroundUpdateRequest : SAStartRequest

@property (retain, nonatomic) NSObject<SAAceSerializable> *attachment;


+(id)backgroundUpdateRequest;
+(id)backgroundUpdateRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif