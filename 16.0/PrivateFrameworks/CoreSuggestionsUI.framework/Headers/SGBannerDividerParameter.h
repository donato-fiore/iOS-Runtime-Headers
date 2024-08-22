// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGBANNERDIVIDERPARAMETER_H
#define SGBANNERDIVIDERPARAMETER_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface SGBannerDividerParameter : NSObject {
    int _position;
    UIColor *_color;
}




-(id)color;
-(id)initWithPosition:(int)arg0 color:(id)arg1 ;
-(int)position;


@end


#endif