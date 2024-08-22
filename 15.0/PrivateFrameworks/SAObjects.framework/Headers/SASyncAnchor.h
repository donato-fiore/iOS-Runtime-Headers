// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASYNCANCHOR_H
#define SASYNCANCHOR_H

@class NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SASyncAppMetaData.h"

@interface SASyncAnchor : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) SASyncAppMetaData *appMetaData;
@property (nonatomic) NSInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *generation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *intentSlotName;
@property (copy, nonatomic) NSString *key;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *suspendDurationInSeconds;
@property (copy, nonatomic) NSString *suspendReason;
@property (copy, nonatomic) NSString *validity;


+(id)anchor;
+(id)anchorWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif