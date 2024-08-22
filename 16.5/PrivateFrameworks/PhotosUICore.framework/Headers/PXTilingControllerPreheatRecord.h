// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXTILINGCONTROLLERPREHEATRECORD_H
#define PXTILINGCONTROLLERPREHEATRECORD_H

@class NSIndexSet;
@protocol PXTilingControllerPreheatHandler;

#import <Foundation/Foundation.h>


@interface PXTilingControllerPreheatRecord : NSObject

@property (readonly, nonatomic) *void context; // ivar: _context
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (readonly, weak, nonatomic) NSObject<PXTilingControllerPreheatHandler> *preheatHandler; // ivar: _preheatHandler
@property (retain, nonatomic) NSIndexSet *preheatedTileIndexes; // ivar: _preheatedTileIndexes
@property (nonatomic) NSUInteger tileGroup; // ivar: _tileGroup


-(id)initWithPreheatHandler:(id)arg0 context:(*void)arg1 ;


@end


#endif