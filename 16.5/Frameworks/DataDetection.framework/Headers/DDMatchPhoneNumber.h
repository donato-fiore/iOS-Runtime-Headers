// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDMATCHPHONENUMBER_H
#define DDMATCHPHONENUMBER_H

@class NSString;


#import "DDMatch.h"

@interface DDMatchPhoneNumber : DDMatch

@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber


-(id)initWithDDScannerResult:(id)arg0 ;


@end


#endif