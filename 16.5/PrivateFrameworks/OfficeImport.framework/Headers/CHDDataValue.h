// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHDDATAVALUE_H
#define CHDDATAVALUE_H


#import <Foundation/Foundation.h>


@interface CHDDataValue : NSObject {
    CHDDataPoint mDataPoint;
}




+(id)dataValue;
+(id)dataValueWithIndex:(NSInteger)arg0 value:(struct EDValue *)arg1 ;
-(NSInteger)index;
-(NSUInteger)contentFormatId;
-(id)contentFormatWithResources:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithIndex:(NSInteger)arg0 value:(struct EDValue *)arg1 ;
-(struct CHDDataPoint *)dataPoint;
-(struct EDValue *)value;
-(void)setContentFormatId:(NSUInteger)arg0 ;
-(void)setContentFormatWithResources:(id)arg0 resources:(id)arg1 ;
-(void)setDataPoint:(struct CHDDataPoint *)arg0 ;
-(void)setIndex:(NSInteger)arg0 ;
-(void)setValue:(struct EDValue *)arg0 ;


@end


#endif