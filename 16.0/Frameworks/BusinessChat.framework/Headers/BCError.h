// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCERROR_H
#define BCERROR_H

@class NSNumber, NSDictionary, NSString;
@protocol BCDictionarySerializable, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BCError : NSObject <BCDictionarySerializable, NSSecureCoding>



@property (retain, nonatomic) NSNumber *code; // ivar: _code
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSString *message; // ivar: _message


+(BOOL)supportsSecureCoding;
-(id)initWithCode:(id)arg0 domain:(id)arg1 message:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif