// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VISPROVIDER_H
#define VISPROVIDER_H


#import <Foundation/Foundation.h>


@interface VISProvider : NSObject



+(id)VISConfigurationForVersion:(unsigned int)arg0 ;
+(id)VISProcessorForVersion:(unsigned int)arg0 ;
+(id)_loadVISBundleForVersion:(unsigned int)arg0 ;


@end


#endif