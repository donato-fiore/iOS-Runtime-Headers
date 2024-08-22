// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSWIDGETKEYSBOX_H
#define CHSWIDGETKEYSBOX_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHSWidgetKeysBox : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *widgetKeys; // ivar: _widgetKeys


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWidgetKeys:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif