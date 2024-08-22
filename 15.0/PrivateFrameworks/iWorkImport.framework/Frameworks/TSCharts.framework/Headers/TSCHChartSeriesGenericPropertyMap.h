// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTSERIESGENERICPROPERTYMAP_H
#define TSCHCHARTSERIESGENERICPROPERTYMAP_H

@class TSSPropertyMap;



@interface TSCHChartSeriesGenericPropertyMap : TSSPropertyMap



+(id)imageFillProperties;
+(id)properties;
+(void)savePropertyMap:(id)arg0 toArchive:(*void)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif