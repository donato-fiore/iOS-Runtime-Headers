// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTOBJECT_H
#define SIGNPOSTOBJECT_H

@class NSDictionary, NSString, NSNumber;


#import "SignpostSupportObject.h"

@interface SignpostObject : SignpostSupportObject

@property (retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *number1Name; // ivar: _number1Name
@property (retain, nonatomic) NSNumber *number1Value; // ivar: _number1Value
@property (retain, nonatomic) NSString *number2Name; // ivar: _number2Name
@property (retain, nonatomic) NSNumber *number2Value; // ivar: _number2Value
@property (nonatomic) NSUInteger scope; // ivar: _scope
@property (readonly, nonatomic) NSString *scopeString;
@property (nonatomic) NSUInteger signpostId; // ivar: _signpostId
@property (retain, nonatomic) NSString *string1Name; // ivar: _string1Name
@property (retain, nonatomic) NSString *string1Value; // ivar: _string1Value
@property (retain, nonatomic) NSString *string2Name; // ivar: _string2Name
@property (retain, nonatomic) NSString *string2Value; // ivar: _string2Value
@property (nonatomic) BOOL telemetryEnabled; // ivar: _telemetryEnabled


+(id)serializationTypeNumber;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionStringForColumn:(NSUInteger)arg0 timeFormat:(NSUInteger)arg1 asBegin:(BOOL)arg2 ;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg0 shouldRedact:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSubsystem:(id)arg0 category:(id)arg1 name:(id)arg2 signpostId:(NSUInteger)arg3 scope:(NSUInteger)arg4 timebaseRatio:(CGFloat)arg5 attributes:(id)arg6 ;


@end


#endif