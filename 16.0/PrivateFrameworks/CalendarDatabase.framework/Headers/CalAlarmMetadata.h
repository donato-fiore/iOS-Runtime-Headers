// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALALARMMETADATA_H
#define CALALARMMETADATA_H



#import "CalItemMetadata.h"

@interface CalAlarmMetadata : CalItemMetadata



+(BOOL)isRecognizedParameter:(id)arg0 forProperty:(id)arg1 inComponent:(id)arg2 ;
+(BOOL)isRecognizedProperty:(id)arg0 inComponent:(id)arg1 ;
+(BOOL)shouldSkipSavingUnrecognizedParametersForProperty:(id)arg0 inComponent:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)metadataWithData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;


@end


#endif