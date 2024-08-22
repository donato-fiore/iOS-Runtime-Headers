// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TWONETSSTYLETRANSFER_H
#define TWONETSSTYLETRANSFER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TwoNetsStyleTransfer : NSObject {
    *void ctx;
    *void plan;
    ? net;
    basic_string<char, std::char_traits<char>, std::allocator<char>> output_layer_name;
    NSUInteger dim_data0;
    NSUInteger dim_data0__small;
    NSUInteger dim_data2;
    NSUInteger dim_data2__small;
    *__IOSurface result;
    postprocessing_settings_t current_postprocessing_settings;
    NSString *currentNetworkPath;
}




+(BOOL)supportsANE;
-(id)init;
-(int)heightBig;
-(int)heightSmall;
-(int)load:(id)arg0 outputName:(id)arg1 ;
-(int)widthBig;
-(int)widthSmall;
-(struct __IOSurface *)executeSyncWithImage:(struct __CVBuffer *)arg0 smallImage:(struct __CVBuffer *)arg1 ;
-(void)dealloc;


@end


#endif