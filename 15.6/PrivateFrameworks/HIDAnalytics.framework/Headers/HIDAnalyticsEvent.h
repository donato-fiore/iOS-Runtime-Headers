// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HIDANALYTICSEVENT_H
#define HIDANALYTICSEVENT_H

@class NSMutableDictionary, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface HIDAnalyticsEvent : NSObject {
    NSMutableDictionary *_fields;
    BOOL _isUpdated;
}


@property (retain) NSDictionary *desc; // ivar: _desc
@property BOOL isLogged; // ivar: _isLogged
@property (retain) NSString *name; // ivar: _name


-(id)initWithAttributes:(id)arg0 description:(id)arg1 ;
-(id)value;
-(void)activate;
-(void)addField:(id)arg0 ;
-(void)addHistogramFieldWithSegments:(id)arg0 segments:(struct _HIDAnalyticsHistogramSegmentConfig *)arg1 count:(NSInteger)arg2 ;
-(void)cancel;
-(void)setIntegerValue:(NSUInteger)arg0 ;
-(void)setIntegerValue:(NSUInteger)arg0 forField:(id)arg1 ;
-(void)setStringValue:(id)arg0 ;
-(void)setStringValue:(id)arg0 forField:(id)arg1 ;
-(void)setValue:(id)arg0 ;


@end


#endif