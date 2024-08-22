// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASPRONUNCIATIONDATA_H
#define SASPRONUNCIATIONDATA_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASPronunciationData : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *apgId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *orthography;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tokenOffset;
@property (copy, nonatomic) NSArray *ttsPronunciations;
@property (copy, nonatomic) NSString *ttsVersion;


+(id)pronunciationData;
+(id)pronunciationDataWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif