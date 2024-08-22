// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAINTENTGROUPSIRIKITLISTPOSITION_H
#define SAINTENTGROUPSIRIKITLISTPOSITION_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAIntentGroupSiriKitListPosition : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger offset;
@property (copy, nonatomic) NSString *position;
@property (readonly) Class superclass;


+(id)siriKitListPosition;
+(id)siriKitListPositionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif