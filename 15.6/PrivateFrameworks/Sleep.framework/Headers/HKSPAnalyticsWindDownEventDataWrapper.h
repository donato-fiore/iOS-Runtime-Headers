// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPANALYTICSWINDDOWNEVENTDATAWRAPPER_H
#define HKSPANALYTICSWINDDOWNEVENTDATAWRAPPER_H

@class NSArray;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKSPAnalyticsWindDownEventDataWrapper : NSObject <NSCoding, NSSecureCoding>



@property (retain, nonatomic) NSArray *eventDatums; // ivar: _eventDatums


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventDatums:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif