// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPHONENUMBER_H
#define ABPHONENUMBER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ABPhoneNumber : NSObject {
    ? _decomposedPhoneNumber;
    char * _phoneNumberBytes;
}


@property (readonly) *? decomposedPhoneNumberPointer;
@property (readonly) NSString *lastFour; // ivar: _lastFour
@property (readonly) char * normalizedPhoneChars;
@property (readonly) NSString *originalStringValue; // ivar: _originalStringValue


-(id)initWithPhoneNumberString:(id)arg0 countryCode:(id)arg1 ;
-(void)dealloc;


@end


#endif