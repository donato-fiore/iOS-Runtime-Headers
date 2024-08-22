// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RUISPINNERRECORD_H
#define RUISPINNERRECORD_H

@class NSArray, UINavigationItem, NSString;

#import <Foundation/Foundation.h>


@interface RUISpinnerRecord : NSObject

@property (nonatomic) BOOL hidesBackButton; // ivar: _hidesBackButton
@property (copy, nonatomic) NSArray *leftItems; // ivar: _leftItems
@property (retain, nonatomic) UINavigationItem *navigationItem; // ivar: _navigationItem
@property (copy, nonatomic) NSArray *rightItems; // ivar: _rightItems
@property (copy, nonatomic) NSString *spinningTitle; // ivar: _spinningTitle
@property (copy, nonatomic) NSString *title; // ivar: _title




@end


#endif