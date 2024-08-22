// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIDESIGNLIBRARY_H
#define CUIDESIGNLIBRARY_H


#import <Foundation/Foundation.h>


@interface CUIDesignLibrary : NSObject



+(id)colorWithName:(NSInteger)arg0 designSystem:(NSInteger)arg1 palette:(NSInteger)arg2 colorScheme:(NSInteger)arg3 contrast:(NSInteger)arg4 styling:(NSInteger)arg5 displayGamut:(NSInteger)arg6 error:(*id)arg7 ;
+(id)colorWithTraits:(struct CUIDesignColorTraits )arg0 error:(*id)arg1 ;


@end


#endif