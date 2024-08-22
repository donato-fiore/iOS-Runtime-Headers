// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSPROPERTY_H
#define VCSPROPERTY_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "VCSPropertyValue.h"

@interface VCSProperty : NSObject

@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) VCSPropertyValue *singleValue;
@property (readonly, nonatomic) NSArray *values; // ivar: _values


-(id)initClassificationProperty:(id)arg0 withParseState:(id)arg1 property:(struct ? *)arg2 ;
-(id)initEncodedTextProperty:(id)arg0 withParseState:(id)arg1 property:(struct ? *)arg2 ;
-(id)initISO8061DateListProperty:(id)arg0 withParseState:(id)arg1 property:(struct ? *)arg2 ;
-(id)initISO8061Property:(id)arg0 withParseState:(id)arg1 property:(struct ? *)arg2 ;
-(id)initIntProperty:(id)arg0 withParseState:(id)arg1 property:(struct ? *)arg2 ;
-(id)initKeywordListProperty:(id)arg0 withParseState:(id)arg1 property:(struct ? *)arg2 ;
-(id)initRFC822AddressProperty:(id)arg0 withParseState:(id)arg1 property:(struct ? *)arg2 ;
-(id)initRecurrenceProperty:(id)arg0 withParseState:(id)arg1 property:(struct ? *)arg2 ;
-(id)initStatusProperty:(id)arg0 withParseState:(id)arg1 property:(struct ? *)arg2 ;
-(id)initTranspProperty:(id)arg0 withParseState:(id)arg1 property:(struct ? *)arg2 ;
-(id)initURIProperty:(id)arg0 withParseState:(id)arg1 property:(struct ? *)arg2 ;
-(id)initWithName:(id)arg0 rawValue:(id)arg1 type:(NSUInteger)arg2 ;
-(id)initWithName:(id)arg0 rawValues:(id)arg1 type:(NSUInteger)arg2 ;
-(id)initWithName:(id)arg0 value:(id)arg1 ;
-(id)initWithName:(id)arg0 values:(id)arg1 ;
-(id)initWithVCSLine:(id)arg0 parseState:(id)arg1 ;


@end


#endif