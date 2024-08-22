// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUILOCALIMAGERESOURCE_H
#define SAUILOCALIMAGERESOURCE_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUILocalImageResource : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *imageCode;
@property (readonly) Class superclass;


+(id)localImageResource;
+(id)localImageResourceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif