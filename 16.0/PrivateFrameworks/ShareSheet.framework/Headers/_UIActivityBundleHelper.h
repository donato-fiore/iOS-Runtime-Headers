// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIACTIVITYBUNDLEHELPER_H
#define _UIACTIVITYBUNDLEHELPER_H

@class LSBundleProxy;

#import <Foundation/Foundation.h>


@interface _UIActivityBundleHelper : NSObject

@property (retain, nonatomic) LSBundleProxy *bundleProxy; // ivar: _bundleProxy


+(id)activityBundleHelperForExtension:(id)arg0 ;
-(id)debugDescription;
-(id)imageForApplicationIconFormat:(int)arg0 activityCategory:(NSInteger)arg1 ;
-(id)init;
-(id)initWithBundleProxy:(id)arg0 ;


@end


#endif