// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPIMAGEATTRIBUTES_H
#define MFPIMAGEATTRIBUTES_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MFPImageAttributes : NSObject {
    NSMutableDictionary *mColorAdjustMap;
}




-(id)colorAdjustWithType:(int)arg0 ;
-(id)ensureColorAdjustWithType:(int)arg0 ;
-(id)init;


@end


#endif