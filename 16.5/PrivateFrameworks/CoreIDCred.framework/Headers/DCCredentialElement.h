// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DCCREDENTIALELEMENT_H
#define DCCREDENTIALELEMENT_H

@class NSArray, NSData, NSDate, NSDictionary, NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DCCredentialElement : NSObject <NSSecureCoding>



@property (retain) NSArray *arrayValue; // ivar: _arrayValue
@property (retain) NSData *dataValue; // ivar: _dataValue
@property (retain) NSDate *dateValue; // ivar: _dateValue
@property (retain) NSDictionary *dictionaryValue; // ivar: _dictionaryValue
@property (retain) NSString *elementIdentifier; // ivar: _elementIdentifier
@property (retain) NSNumber *numberValue; // ivar: _numberValue
@property NSUInteger numericTypeHint; // ivar: _numericTypeHint
@property (retain) NSString *stringValue; // ivar: _stringValue


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithElementIdentifier:(id)arg0 ;
-(id)initWithElementIdentifier:(id)arg0 arrayValue:(id)arg1 ;
-(id)initWithElementIdentifier:(id)arg0 boolValue:(BOOL)arg1 ;
-(id)initWithElementIdentifier:(id)arg0 dataValue:(id)arg1 ;
-(id)initWithElementIdentifier:(id)arg0 dateValue:(id)arg1 ;
-(id)initWithElementIdentifier:(id)arg0 dictionaryValue:(id)arg1 ;
-(id)initWithElementIdentifier:(id)arg0 doubleValue:(CGFloat)arg1 ;
-(id)initWithElementIdentifier:(id)arg0 intValue:(NSInteger)arg1 ;
-(id)initWithElementIdentifier:(id)arg0 stringValue:(id)arg1 ;
-(id)initWithElementIdentifier:(id)arg0 stringValue:(id)arg1 dataValue:(id)arg2 dateValue:(id)arg3 numberValue:(id)arg4 arrayValue:(id)arg5 dictionaryValue:(id)arg6 numericTypeHint:(NSUInteger)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif