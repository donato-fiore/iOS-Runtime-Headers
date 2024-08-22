// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKPLACEBUSINESSINFOITEM_H
#define _MKPLACEBUSINESSINFOITEM_H

@class NSString, NSAttributedString, UIFont, UIColor, UIImage;

#import <Foundation/Foundation.h>


@interface _MKPlaceBusinessInfoItem : NSObject {
    NSString *_displayString;
    BOOL _isAvailable;
    NSAttributedString *_formattedDisplayString;
    UIFont *_font;
    UIColor *_textColor;
    NSString *_symbolName;
}


@property (readonly, nonatomic) UIImage *amenityIcon;
@property (readonly, nonatomic) NSString *amenityString;
@property (readonly, nonatomic) NSAttributedString *displayString;


+(id)itemWithDescription:(id)arg0 availability:(BOOL)arg1 symbolName:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_resolvedAvailabilityIconWithFont:(id)arg0 textColor:(id)arg1 ;
-(void)setFont:(id)arg0 textColor:(id)arg1 ;


@end


#endif