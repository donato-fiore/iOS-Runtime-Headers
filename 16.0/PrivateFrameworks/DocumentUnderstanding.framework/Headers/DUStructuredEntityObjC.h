// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DUSTRUCTUREDENTITYOBJC_H
#define DUSTRUCTUREDENTITYOBJC_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding18DUStructuredEntity.h"
#import "DUCalendarEventObjC.h"
#import "DUDebugInfoObjC.h"

@interface DUStructuredEntityObjC : NSObject {
    _TtC21DocumentUnderstanding18DUStructuredEntity *_underlying;
}


@property (copy, nonatomic) NSDictionary *addressComponents;
@property (copy, nonatomic) DUCalendarEventObjC *calendarEvent;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *phoneNumberLabel;
@property (copy, nonatomic) DUDebugInfoObjC *responseDebugInfo;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;


-(id)init;


@end


#endif