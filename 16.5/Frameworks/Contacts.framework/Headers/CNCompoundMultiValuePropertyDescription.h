// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCOMPOUNDMULTIVALUEPROPERTYDESCRIPTION_H
#define CNCOMPOUNDMULTIVALUEPROPERTYDESCRIPTION_H

@class NSArray;


#import "CNMultiValuePropertyDescription.h"

@interface CNCompoundMultiValuePropertyDescription : CNMultiValuePropertyDescription

@property (readonly, nonatomic) id *dictionaryTransform;
@property (readonly, nonatomic) id *fromDictionaryTransform;
@property (readonly, nonatomic) NSArray *summarizationKeys;


-(id)fromPlistTransform:(SEL)arg0 ;
-(id)plistTransform:(SEL)arg0 ;
-(id)stringForIndexingForContact:(id)arg0 ;


@end


#endif