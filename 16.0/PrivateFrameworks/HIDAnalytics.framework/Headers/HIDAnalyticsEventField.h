// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HIDANALYTICSEVENTFIELD_H
#define HIDANALYTICSEVENTFIELD_H

@class NSString;
@protocol HIDAnalyticsEventFieldProtocol;

#import <Foundation/Foundation.h>


@interface HIDAnalyticsEventField : NSObject <HIDAnalyticsEventFieldProtocol>

 {
    NSUInteger integerValue;
    NSString *stringValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *fieldName; // ivar: _fieldName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak) id *value;


-(id)initWithName:(id)arg0 ;
-(void)setIntegerValue:(NSUInteger)arg0 ;
-(void)setStringValue:(id)arg0 ;


@end


#endif