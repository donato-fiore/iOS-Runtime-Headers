// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMESSAGELINK_H
#define GEOMESSAGELINK_H

@class NSString, NSTimeZone;

#import <Foundation/Foundation.h>

#import "GEOPDMessageLink.h"

@interface GEOMessageLink : NSObject {
    GEOPDMessageLink *_messageLink;
}


@property (readonly, nonatomic) BOOL isVerified;
@property (readonly, nonatomic) NSString *messageID;
@property (readonly, nonatomic) NSString *messageURLString;
@property (readonly, nonatomic) NSString *navBackgroundColorString;
@property (readonly, nonatomic) NSString *navTintColorString;
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(id)initWithMessageLink:(id)arg0 ;
-(id)messageBusinessHours;
-(int)responseTime;


@end


#endif