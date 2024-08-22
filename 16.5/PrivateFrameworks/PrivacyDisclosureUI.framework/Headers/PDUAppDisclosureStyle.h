// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDUAPPDISCLOSURESTYLE_H
#define PDUAPPDISCLOSURESTYLE_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface PDUAppDisclosureStyle : NSObject

@property (readonly, nonatomic) NSInteger interfaceStyle; // ivar: _interfaceStyle
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(id)styleWithApplication:(id)arg0 ;
+(id)styleWithBundle:(id)arg0 ;
-(NSInteger)_styleFromString:(id)arg0 ;
-(id)initWithBundle:(id)arg0 ;
-(void)_fetchStyleWithBundle:(id)arg0 ;


@end


#endif