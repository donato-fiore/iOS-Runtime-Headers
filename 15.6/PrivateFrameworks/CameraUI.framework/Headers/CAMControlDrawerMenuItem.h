// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMCONTROLDRAWERMENUITEM_H
#define CAMCONTROLDRAWERMENUITEM_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface CAMControlDrawerMenuItem : NSObject

@property (readonly, copy, nonatomic) NSString *selectedTitle; // ivar: _selectedTitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSNumber *value; // ivar: _value


-(id)initWithTitle:(id)arg0 selectedTitle:(id)arg1 value:(id)arg2 ;
-(id)initWithTitle:(id)arg0 value:(id)arg1 ;


@end


#endif