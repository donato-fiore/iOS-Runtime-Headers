// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKFONTLOADER_H
#define NTKFONTLOADER_H


#import <Foundation/Foundation.h>


@interface NTKFontLoader : NSObject



+(id)fontDescriptorForSectName:(id)arg0 ;
+(id)fontDescriptorForSectName:(id)arg0 fromMachO:(struct mach_header_64 *)arg1 ;


@end


#endif