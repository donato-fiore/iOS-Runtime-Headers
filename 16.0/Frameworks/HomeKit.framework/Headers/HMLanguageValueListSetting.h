// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMLANGUAGEVALUELISTSETTING_H
#define HMLANGUAGEVALUELISTSETTING_H

@class NSArray;


#import "HMImmutableSetting.h"

@interface HMLanguageValueListSetting : HMImmutableSetting

@property (readonly, copy) NSArray *languageValues; // ivar: _languageValues


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithKeyPath:(id)arg0 readOnly:(BOOL)arg1 languageValues:(id)arg2 ;
-(id)initWithKeyPath:(id)arg0 readOnly:(BOOL)arg1 payload:(id)arg2 ;
-(id)initWithProtoPayload:(id)arg0 ;
-(id)payloadCopy;
-(id)protoPayload;


@end


#endif