// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIDCELEMENT_H
#define CIDCELEMENT_H

@class NSArray, NSData, NSDate, NSDictionary, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface CIDCElement : NSObject

@property (retain) NSArray *arrayValue; // ivar: _arrayValue
@property (retain) NSData *dataValue; // ivar: _dataValue
@property (retain) NSDate *dateValue; // ivar: _dateValue
@property (retain) NSDictionary *dictionaryValue; // ivar: _dictionaryValue
@property (retain) NSString *elementIdentifier; // ivar: _elementIdentifier
@property (retain) NSNumber *numberValue; // ivar: _numberValue
@property (retain) NSString *stringValue; // ivar: _stringValue


-(id)initWithElementIdentifier:(id)arg0 arrayValue:(id)arg1 ;
-(id)initWithElementIdentifier:(id)arg0 dataValue:(id)arg1 ;
-(id)initWithElementIdentifier:(id)arg0 dateValue:(id)arg1 ;
-(id)initWithElementIdentifier:(id)arg0 dictionaryValue:(id)arg1 ;
-(id)initWithElementIdentifier:(id)arg0 numberValue:(id)arg1 ;
-(id)initWithElementIdentifier:(id)arg0 stringValue:(id)arg1 ;
-(id)initWithElementIdentifier:(id)arg0 stringValue:(id)arg1 dataValue:(id)arg2 dateValue:(id)arg3 numberValue:(id)arg4 arrayValue:(id)arg5 dictionaryValue:(id)arg6 ;


@end


#endif