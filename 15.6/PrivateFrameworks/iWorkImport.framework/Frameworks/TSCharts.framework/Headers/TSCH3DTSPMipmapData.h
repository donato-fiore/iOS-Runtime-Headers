// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DTSPMIPMAPDATA_H
#define TSCH3DTSPMIPMAPDATA_H

@class TSPData;

#import <Foundation/Foundation.h>

#import "TSCH3DTSPImageDataTexture.h"

@interface TSCH3DTSPMipmapData : NSObject {
    TSCH3DTSPImageDataTexture *_parent;
}


@property (readonly, nonatomic) TSPData *data; // ivar: _data


+(id)dataWithTSPData:(id)arg0 ;
-(id)initWithTSPData:(id)arg0 ;
-(void)setParent:(id)arg0 ;


@end


#endif