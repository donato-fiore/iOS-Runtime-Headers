// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUISPECIFIERSPINNERCONTROLLER_H
#define AAUISPECIFIERSPINNERCONTROLLER_H

@class PSSpecifier, NSString;
@protocol AAUISpinnerController;

#import <Foundation/Foundation.h>


@interface AAUISpecifierSpinnerController : NSObject <AAUISpinnerController>

 {
    PSSpecifier *_specifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSpecifier:(id)arg0 ;
-(void)startSpinning;
-(void)stopSpinning;


@end


#endif