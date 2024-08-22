// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLETEXTTOSPEECHSPEECHFEATUREMODELIDENTIFIER_H
#define FTMUTABLETEXTTOSPEECHSPEECHFEATUREMODELIDENTIFIER_H

@class NSString;


#import "FTTextToSpeechSpeechFeatureModelIdentifier.h"

@interface FTMutableTextToSpeechSpeechFeatureModelIdentifier : FTTextToSpeechSpeechFeatureModelIdentifier

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif