// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSUSERNOTIFICATIONCOLORDEFINITION_H
#define SBSUSERNOTIFICATIONCOLORDEFINITION_H

@class BSColor, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SBSUserNotificationColorDefinition : NSObject <NSCopying>



@property (readonly, copy, nonatomic) BSColor *color; // ivar: _color
@property (readonly, copy, nonatomic) NSString *colorName; // ivar: _colorName


+(id)definitionWithColor:(id)arg0 ;
+(id)definitionWithColorName:(id)arg0 ;
-(id)_colorForString:(id)arg0 ;
-(id)_initWithColorName:(id)arg0 color:(id)arg1 ;
-(id)_initWithDictionary:(id)arg0 ;
-(id)_stringForColor:(id)arg0 ;
-(id)build;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif