// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_INTERFACE_H
#define NWCONCRETE_NW_INTERFACE_H

@class NSString;
@protocol OS_nw_interface;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_interface : NSObject <OS_nw_interface>

 {
    unsigned int index;
    nw_interface_details details;
    unsigned int delegate_index;
    unsigned int generation;
    int type;
    int subtype;
    char name;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif