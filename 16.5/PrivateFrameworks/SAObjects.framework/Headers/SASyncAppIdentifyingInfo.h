// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASYNCAPPIDENTIFYINGINFO_H
#define SASYNCAPPIDENTIFYINGINFO_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASyncAppIdentifyingInfo : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *buildNumber;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *version;


+(id)appIdentifyingInfo;
+(id)appIdentifyingInfoWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif