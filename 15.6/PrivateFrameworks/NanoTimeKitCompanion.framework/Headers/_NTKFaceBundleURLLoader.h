// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NTKFACEBUNDLEURLLOADER_H
#define _NTKFACEBUNDLEURLLOADER_H

@class NSArray;


#import "NTKFaceBundleLoader.h"

@interface _NTKFaceBundleURLLoader : NTKFaceBundleLoader

@property (retain, nonatomic) NSArray *urls; // ivar: _urls


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_enumerateBundles:(id)arg0 ;
-(void)_loadClassesUsingBlock:(id)arg0 ;


@end


#endif