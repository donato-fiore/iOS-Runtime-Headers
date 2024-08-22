// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAWEBWEBRESULT_H
#define SAWEBWEBRESULT_H

@class NSString, NSURL;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAWebWebResult : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptionText;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *url;


+(id)webResult;
+(id)webResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif