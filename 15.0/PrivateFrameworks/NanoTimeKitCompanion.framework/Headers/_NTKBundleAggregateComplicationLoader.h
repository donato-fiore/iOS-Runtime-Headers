// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NTKBUNDLEAGGREGATECOMPLICATIONLOADER_H
#define _NTKBUNDLEAGGREGATECOMPLICATIONLOADER_H

@class NSOrderedSet;


#import "NTKBundleComplicationDataSourceLoader.h"

@interface _NTKBundleAggregateComplicationLoader : NTKBundleComplicationDataSourceLoader

@property (copy, nonatomic) NSOrderedSet *loaders; // ivar: _loaders


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_loadClassesUsingBlock:(id)arg0 ;


@end


#endif