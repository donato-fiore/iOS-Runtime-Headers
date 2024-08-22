// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIGNPOSTSUPPORTMETADATASEGMENT_H
#define SIGNPOSTSUPPORTMETADATASEGMENT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "SignpostSupportMessageArgument.h"

@interface SignpostSupportMetadataSegment : NSObject

@property (readonly, nonatomic) SignpostSupportMessageArgument *argument; // ivar: _argument
@property (readonly, nonatomic) NSArray *placeholderTokens; // ivar: _placeholderTokens
@property (readonly, nonatomic) NSString *stringPrefix; // ivar: _stringPrefix
@property (readonly, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic) NSString *typeNamespace; // ivar: _typeNamespace


-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg0 shouldRedact:(BOOL)arg1 didRedactOut:(*BOOL)arg2 ;
-(id)initWithArgumentObject:(id)arg0 typeNamespace:(id)arg1 type:(id)arg2 tokens:(id)arg3 stringPrefix:(id)arg4 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif