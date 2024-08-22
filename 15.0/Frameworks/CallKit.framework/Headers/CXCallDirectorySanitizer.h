// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXCALLDIRECTORYSANITIZER_H
#define CXCALLDIRECTORYSANITIZER_H

@class NSCharacterSet;

#import <Foundation/Foundation.h>


@interface CXCallDirectorySanitizer : NSObject

@property (readonly, nonatomic) NSCharacterSet *nonPhoneNumbersCharacterSet; // ivar: _nonPhoneNumbersCharacterSet
@property (readonly, nonatomic) NSCharacterSet *phoneNumbersCharacterSet; // ivar: _phoneNumbersCharacterSet
@property (readonly, nonatomic) NSCharacterSet *phoneNumbersIgnoredCharacterSet; // ivar: _phoneNumbersIgnoredCharacterSet


-(id)canonicalizedPhoneNumber:(id)arg0 ;
-(id)init;


@end


#endif