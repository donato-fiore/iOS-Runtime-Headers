// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAENTRYPOINT_H
#define SAENTRYPOINT_H

@class NSString, NSNumber;
@protocol SAAceSerializable, SAAceComparable;


#import "AceObject.h"

@interface SAEntryPoint : AceObject <SAAceSerializable, SAAceComparable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (readonly) Class superclass;


+(id)entryPoint;
+(id)entryPointWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif