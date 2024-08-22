// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFVALUESETFORMATTER_H
#define HFVALUESETFORMATTER_H

@class NSFormatter;



@interface HFValueSetFormatter : NSFormatter

@property (copy, nonatomic) id *stringProvider; // ivar: _stringProvider
@property (nonatomic) NSInteger unitStyle; // ivar: _unitStyle


+(id)formatterWithStringProvider:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithStringProvider:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;


@end


#endif