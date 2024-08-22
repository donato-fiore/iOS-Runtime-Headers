// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAINTENTGROUPINTENTSEARCHMETADATA_H
#define SAINTENTGROUPINTENTSEARCHMETADATA_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAIntentGroupIntentSearchMetadata : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *jsonData;
@property (copy, nonatomic) NSString *metadataType;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger version;


+(id)intentSearchMetadata;
+(id)intentSearchMetadataWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif