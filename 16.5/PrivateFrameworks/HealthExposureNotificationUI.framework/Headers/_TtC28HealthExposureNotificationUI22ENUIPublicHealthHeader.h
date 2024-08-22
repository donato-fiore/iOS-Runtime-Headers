// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI22ENUIPUBLICHEALTHHEADER_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI22ENUIPUBLICHEALTHHEADER_H

@class UIColor, NSURL, NSString;

#import <Foundation/Foundation.h>


@interface _TtC28HealthExposureNotificationUI22ENUIPublicHealthHeader : NSObject {
    ? title;
    ? subtitle;
    ? logoURL;
}


@property (nonatomic, readonly) UIColor *backgroundColor; // ivar: backgroundColor
@property (nonatomic, readonly) NSURL *logoURL;
@property (nonatomic, readonly) NSInteger style; // ivar: style
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) UIColor *textColor; // ivar: textColor
@property (nonatomic, readonly) NSString *title;


-(id)init;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 backgroundColor:(id)arg2 textColor:(id)arg3 logoURL:(id)arg4 style:(NSInteger)arg5 ;


@end


#endif