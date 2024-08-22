// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RLMSWIFTPROPERTYMETADATA_H
#define RLMSWIFTPROPERTYMETADATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RLMSwiftPropertyMetadata : NSObject

@property (retain, nonatomic) NSString *className; // ivar: _className
@property (nonatomic) NSUInteger kind; // ivar: _kind
@property (retain, nonatomic) NSString *linkedPropertyName; // ivar: _linkedPropertyName
@property (retain, nonatomic) NSString *propertyName; // ivar: _propertyName
@property (nonatomic) int propertyType; // ivar: _propertyType


+(id)metadataForLinkingObjectsProperty:(id)arg0 className:(id)arg1 linkedPropertyName:(id)arg2 ;
+(id)metadataForListProperty:(id)arg0 ;
+(id)metadataForNilLiteralOptionalProperty:(id)arg0 ;
+(id)metadataForOptionalProperty:(id)arg0 type:(int)arg1 ;
+(id)metadataForOtherProperty:(id)arg0 ;


@end


#endif