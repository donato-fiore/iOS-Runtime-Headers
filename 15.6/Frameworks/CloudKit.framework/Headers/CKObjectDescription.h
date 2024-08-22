// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKOBJECTDESCRIPTION_H
#define CKOBJECTDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CKOrderedDictionary.h"

@interface CKObjectDescription : NSObject

@property (readonly, nonatomic) BOOL avoidShortDescription; // ivar: _avoidShortDescription
@property (retain, nonatomic) NSString *descriptionPrefix; // ivar: _descriptionPrefix
@property (retain, nonatomic) CKOrderedDictionary *orderedDictionary; // ivar: _orderedDictionary
@property (nonatomic) BOOL printAsDictionary; // ivar: _printAsDictionary
@property (readonly, nonatomic) BOOL redact; // ivar: _redact


-(id)_arrayDescription:(id)arg0 shouldRedact:(BOOL)arg1 ;
-(id)_dictionaryDescription:(id)arg0 shouldRedact:(BOOL)arg1 ;
-(id)_propertyDescriptionForProperty:(id)arg0 shouldRedact:(BOOL)arg1 ;
-(id)description;
-(id)initWithObject:(id)arg0 redact:(BOOL)arg1 ;
-(id)initWithObject:(id)arg0 redact:(BOOL)arg1 avoidShortDescription:(BOOL)arg2 ;
-(void)_addProperty:(id)arg0 value:(id)arg1 shouldRedact:(BOOL)arg2 ;
-(void)addFlagsForKey:(id)arg0 flagsAndConditions:(id)arg1 ;
-(void)addProperty:(id)arg0 value:(id)arg1 shouldRedact:(BOOL)arg2 ;
-(void)addPropertyIfExists:(id)arg0 value:(id)arg1 shouldRedact:(BOOL)arg2 ;


@end


#endif