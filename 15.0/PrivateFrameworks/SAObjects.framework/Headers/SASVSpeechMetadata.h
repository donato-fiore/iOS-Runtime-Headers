// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASVSPEECHMETADATA_H
#define SASVSPEECHMETADATA_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASVSpeechMetadata : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *phraseDataList;
@property (copy, nonatomic) NSString *preITN;
@property (readonly) Class superclass;


+(id)speechMetadata;
+(id)speechMetadataWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif