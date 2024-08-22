// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNEMAILADDRESSSCANNER_H
#define CNEMAILADDRESSSCANNER_H


#import <Foundation/Foundation.h>


@interface CNEmailAddressScanner : NSObject



-(id)firstEmailAddressInString:(id)arg0 ;
-(void)enumerateEmailAddressesInString:(id)arg0 usingBlock:(id)arg1 ;
-(void)withEmailAddressesInString:(id)arg0 each:(id)arg1 ;


@end


#endif