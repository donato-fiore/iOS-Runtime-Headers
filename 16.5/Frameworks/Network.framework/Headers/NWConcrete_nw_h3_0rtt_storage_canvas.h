// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_H3_0RTT_STORAGE_CANVAS_H
#define NWCONCRETE_NW_H3_0RTT_STORAGE_CANVAS_H

@class NSString;
@protocol OS_nw_h3_0rtt_storage_canvas, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_h3_0rtt_storage_canvas : NSObject <OS_nw_h3_0rtt_storage_canvas>

 {
    NSObject<OS_dispatch_data> *state;
    BOOL dirty;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif