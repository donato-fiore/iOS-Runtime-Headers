// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASYNCAPPMETADATA_H
#define SASYNCAPPMETADATA_H

@class NSString, NSNumber, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SASyncAppIdentifyingInfo.h"

@interface SASyncAppMetaData : AceObject <SAAceSerializable>



@property (retain, nonatomic) SASyncAppIdentifyingInfo *appIdentifyingInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *developerMode;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *syncSlots;


+(id)appMetaData;
+(id)appMetaDataWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif