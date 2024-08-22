// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRFRAMERING_H
#define XRFRAMERING_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface XRFrameRing : NSObject {
    shared_ptr<xray::scheduler::Ring> _ringImpl;
    NSUInteger _ringID;
    NSMutableArray *_managersBySlot;
}




-(id)init;
-(id)initWithMinorFrameCount:(unsigned char)arg0 ;
-(struct shared_ptr<xray::scheduler::Ring> )_parent;
-(void)_moveToCommutator:(*void)arg0 ;
-(void)_removeFromCommutator:(*void)arg0 ;
-(void)assignActivityManager:(id)arg0 frame:(id)arg1 ;
-(void)assignActivityManager:(id)arg0 slot:(unsigned char)arg1 ;


@end


#endif