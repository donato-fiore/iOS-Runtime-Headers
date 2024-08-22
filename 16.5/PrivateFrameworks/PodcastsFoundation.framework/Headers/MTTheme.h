// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTTHEME_H
#define MTTHEME_H

@class NSManagedObject, UIColor, NSString;



@interface MTTheme : NSManagedObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL isBackgroundLight;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (retain, nonatomic) NSString *uuid;




@end


#endif