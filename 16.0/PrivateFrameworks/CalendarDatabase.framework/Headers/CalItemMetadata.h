// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALITEMMETADATA_H
#define CALITEMMETADATA_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CalItemMetadata : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *unrecognizedProperties; // ivar: _unrecognizedProperties


+(BOOL)isRecognizedParameter:(id)arg0 forProperty:(id)arg1 inComponent:(id)arg2 ;
+(BOOL)isRecognizedProperty:(id)arg0 inComponent:(id)arg1 ;
+(BOOL)shouldSkipSavingUnrecognizedParametersForProperty:(id)arg0 inComponent:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_whitelistedClassesForSecureCoding;
+(id)metadataWithData:(id)arg0 ;
+(id)metadataWithICSComponent:(id)arg0 ;
-(id)dataRepresentationWithExistingMetaData:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithICSComponent:(id)arg0 ;
-(id)propertyValueForComparison:(id)arg0 propertyKey:(id)arg1 ;
-(void)applyToComponent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif