// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKTRUSTEDPHONENUMBER_H
#define AKTRUSTEDPHONENUMBER_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface AKTrustedPhoneNumber : NSObject

@property (retain, nonatomic) NSNumber *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *number; // ivar: _number
@property (retain, nonatomic) NSString *numberWithDialCode; // ivar: _numberWithDialCode
@property (retain, nonatomic) NSString *obfuscatedNumber; // ivar: _obfuscatedNumber
@property (retain, nonatomic) NSString *pushMode; // ivar: _pushMode


-(id)description;
-(id)initWithJSONDictionary:(id)arg0 ;


@end


#endif