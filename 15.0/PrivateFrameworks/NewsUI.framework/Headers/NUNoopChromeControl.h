// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUNOOPCHROMECONTROL_H
#define NUNOOPCHROMECONTROL_H

@class NSString;
@protocol NUChromeControl;

#import <Foundation/Foundation.h>


@interface NUNoopChromeControl : NSObject <NUChromeControl>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)prefersChromeHidden:(BOOL)arg0 fromViewController:(id)arg1 ;


@end


#endif