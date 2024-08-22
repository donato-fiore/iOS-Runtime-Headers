// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHDEPRECATEDNUMBERFORMAT_H
#define TSCHDEPRECATEDNUMBERFORMAT_H

@protocol TSSPropertyValueArchiving;

#import <Foundation/Foundation.h>


@interface TSCHDeprecatedNumberFormat : NSObject <TSSPropertyValueArchiving>





+(id)instanceWithArchive:(struct Message *)arg0 unarchiver:(id)arg1 ;
+(id)upgradedNumberFormatFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToArchive:(struct Message *)arg0 archiver:(id)arg1 ;


@end


#endif