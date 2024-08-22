// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NTKBUNDLEBUNDLECOMPLICATIONLOADER_H
#define _NTKBUNDLEBUNDLECOMPLICATIONLOADER_H

@class NSArray;


#import "NTKBundleComplicationDataSourceLoader.h"

@interface _NTKBundleBundleComplicationLoader : NTKBundleComplicationDataSourceLoader

@property (retain, nonatomic) NSArray *urls; // ivar: _urls


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_enumerateBundles:(id)arg0 ;
-(void)_loadClassesUsingBlock:(id)arg0 ;


@end


#endif