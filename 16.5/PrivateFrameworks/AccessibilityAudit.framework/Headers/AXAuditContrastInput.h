// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITCONTRASTINPUT_H
#define AXAUDITCONTRASTINPUT_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface AXAuditContrastInput : NSObject

@property (retain, nonatomic) NSString *backgroundHexColorValue; // ivar: _backgroundHexColorValue
@property (nonatomic) CGFloat displayScaleFactor; // ivar: _displayScaleFactor
@property (nonatomic) BOOL enhanced; // ivar: _enhanced
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (retain, nonatomic) NSString *foregroundHexColorValue; // ivar: _foregroundHexColorValue
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (nonatomic) CGRect imageFrame; // ivar: _imageFrame


-(id)description;
-(id)init;


@end


#endif