// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGCAPTURESPRITEPAYLOAD_H
#define PXGCAPTURESPRITEPAYLOAD_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXGCaptureSpritePayload : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger behavior; // ivar: _behavior


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBehavior:(NSUInteger)arg0 ;


@end


#endif