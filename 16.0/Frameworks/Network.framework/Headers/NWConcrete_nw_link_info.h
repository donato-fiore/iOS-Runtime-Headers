// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_LINK_INFO_H
#define NWCONCRETE_NW_LINK_INFO_H

@class NSString;
@protocol OS_nw_link_info;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_link_info : NSObject <OS_nw_link_info>

 {
    int flow_control_status;
    unsigned char link_quality;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif