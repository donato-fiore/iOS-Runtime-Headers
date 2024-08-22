// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINFOGRAPHICBUTTONITEM_H
#define HKINFOGRAPHICBUTTONITEM_H

@class UIButtonConfiguration, NSString;
@protocol HKInfographicItem;

#import <Foundation/Foundation.h>


@interface HKInfographicButtonItem : NSObject <HKInfographicItem>



@property (copy, nonatomic) id *buttonTapHandler; // ivar: _buttonTapHandler
@property (copy, nonatomic) UIButtonConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 buttonTapHandler:(id)arg1 ;


@end


#endif