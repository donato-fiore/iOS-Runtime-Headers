// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NBPHONENUMBERDESC_H
#define _NBPHONENUMBERDESC_H

@class NSString, NSData, NSArray;

#import <Foundation/Foundation.h>


@interface _NBPhoneNumberDesc : NSObject

@property (readonly, nonatomic) NSString *exampleNumber; // ivar: _exampleNumber
@property (readonly, nonatomic) NSData *nationalNumberMatcherData; // ivar: _nationalNumberMatcherData
@property (readonly, nonatomic) NSString *nationalNumberPattern; // ivar: _nationalNumberPattern
@property (readonly, nonatomic) NSArray *possibleLength; // ivar: _possibleLength
@property (readonly, nonatomic) NSArray *possibleLengthLocalOnly; // ivar: _possibleLengthLocalOnly
@property (readonly, nonatomic) NSData *possibleNumberMatcherData; // ivar: _possibleNumberMatcherData
@property (readonly, nonatomic) NSString *possibleNumberPattern; // ivar: _possibleNumberPattern


-(id)description;
-(id)initWithEntry:(id)arg0 ;


@end


#endif