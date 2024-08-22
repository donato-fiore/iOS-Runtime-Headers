// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRELECTROCARDIOGRAMRECORDINGFOOTER_H
#define HKHRELECTROCARDIOGRAMRECORDINGFOOTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HKHRElectrocardiogramRecordingFooter : NSObject

@property (readonly, nonatomic) NSString *footerLink; // ivar: _footerLink
@property (readonly, nonatomic) NSString *footerText; // ivar: _footerText
@property (readonly, nonatomic) NSString *linkURL; // ivar: _linkURL


-(id)initWithText:(id)arg0 link:(id)arg1 url:(id)arg2 ;


@end


#endif