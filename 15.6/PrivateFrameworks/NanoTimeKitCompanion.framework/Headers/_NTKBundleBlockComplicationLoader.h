// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NTKBUNDLEBLOCKCOMPLICATIONLOADER_H
#define _NTKBUNDLEBLOCKCOMPLICATIONLOADER_H



#import "NTKBundleComplicationDataSourceLoader.h"

@interface _NTKBundleBlockComplicationLoader : NTKBundleComplicationDataSourceLoader

@property (copy, nonatomic) id *block; // ivar: _block


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_loadClassesUsingBlock:(id)arg0 ;


@end


#endif