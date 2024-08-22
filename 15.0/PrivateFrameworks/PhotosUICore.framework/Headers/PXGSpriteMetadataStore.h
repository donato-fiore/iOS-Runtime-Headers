// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGSPRITEMETADATASTORE_H
#define PXGSPRITEMETADATASTORE_H


#import <Foundation/Foundation.h>


@interface PXGSpriteMetadataStore : NSObject {
    unsigned short _resizableCapInsetsCapacity;
}


@property (readonly, nonatomic) unsigned short numberOfResizableCapInsets; // ivar: _numberOfResizableCapInsets
@property (readonly, nonatomic) *? resizableCapInsets; // ivar: _resizableCapInsets


-(id)init;
-(unsigned short)_indexOfResizableCapInsets:(struct ? )arg0 ;
-(unsigned short)addResizableCapInsets:(struct ? )arg0 ;
-(void)dealloc;


@end


#endif