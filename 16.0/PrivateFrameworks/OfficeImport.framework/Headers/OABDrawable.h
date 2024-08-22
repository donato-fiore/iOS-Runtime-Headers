// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OABDRAWABLE_H
#define OABDRAWABLE_H


#import <Foundation/Foundation.h>


@interface OABDrawable : NSObject



+(id)readDrawableFromObject:(id)arg0 state:(id)arg1 ;
+(id)readDrawableFromZipPackageData:(struct CsData *)arg0 foundInObject:(id)arg1 state:(id)arg2 ;
+(id)readDrawablesFromContainer:(id)arg0 state:(id)arg1 ;
+(void)setUpXmlDrawingState:(id)arg0 withBinaryReaderState:(id)arg1 targetDocument:(id)arg2 colorMap:(id)arg3 ;


@end


#endif