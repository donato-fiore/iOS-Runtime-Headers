// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_GROUP_DESCRIPTOR_H
#define NWCONCRETE_NW_GROUP_DESCRIPTOR_H

@class NSString;
@protocol OS_nw_group_descriptor, OS_nw_array, OS_nw_endpoint;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_group_descriptor : NSObject <OS_nw_group_descriptor>

 {
    int type;
    unsigned char group_id;
    NSObject<OS_nw_array> *members;
    NSObject<OS_nw_endpoint> *specific_source;
    BOOL disable_unicast_traffic;
    BOOL __pad_bits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithType:(int)arg0 member:(id)arg1 groupID:(unsigned char)arg2 ;
-(void)dealloc;


@end


#endif