// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21DOCUMENTUNDERSTANDING18DUSTRUCTUREDENTITY_H
#define _TTC21DOCUMENTUNDERSTANDING18DUSTRUCTUREDENTITY_H

@class NSDictionary, NSString;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding15DUCalendarEvent.h"
#import "_TtC21DocumentUnderstanding11DUDebugInfo.h"

@interface _TtC21DocumentUnderstanding18DUStructuredEntity : NSObject <NSCoding, NSCopying>

 {
    ? title;
    ? phoneNumber;
    ? phoneNumberLabel;
    ? email;
    ? url;
    ? addressComponents;
}


@property (nonatomic, copy) NSDictionary *addressComponents;
@property (nonatomic, retain) _TtC21DocumentUnderstanding15DUCalendarEvent *calendarEvent; // ivar: calendarEvent
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *phoneNumberLabel;
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo; // ivar: responseDebugInfo
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *url;


-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif