// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXTRACKEDMEDIARECORD_H
#define _PXTRACKEDMEDIARECORD_H


#import <Foundation/Foundation.h>


@interface _PXTrackedMediaRecord : NSObject

@property (readonly, nonatomic) id *media; // ivar: _media
@property (readonly, nonatomic) NSInteger mediaKind; // ivar: _mediaKind
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)init;
-(id)initWithMedia:(id)arg0 mediaKind:(NSInteger)arg1 timestamp:(CGFloat)arg2 ;


@end


#endif