// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_PROTOCOL_DATA_ARRAY_H
#define NWCONCRETE_NW_PROTOCOL_DATA_ARRAY_H

@class NSString;
@protocol OS_nw_protocol_data_array;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_protocol_data_array : NSObject <OS_nw_protocol_data_array>

 {
    nw_frame_array_s frame_array;
    unsigned int frame_count;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif