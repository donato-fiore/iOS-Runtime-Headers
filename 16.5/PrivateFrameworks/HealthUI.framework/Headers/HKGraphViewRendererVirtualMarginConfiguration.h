// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKGRAPHVIEWRENDERERVIRTUALMARGINCONFIGURATION_H
#define HKGRAPHVIEWRENDERERVIRTUALMARGINCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface HKGraphViewRendererVirtualMarginConfiguration : NSObject

@property (readonly, nonatomic) NSInteger virtualLeftMarginStyle; // ivar: _virtualLeftMarginStyle
@property (readonly, nonatomic) CGFloat virtualLeftMarginWidth; // ivar: _virtualLeftMarginWidth
@property (readonly, nonatomic) NSInteger virtualRightMarginStyle; // ivar: _virtualRightMarginStyle
@property (readonly, nonatomic) CGFloat virtualRightMarginWidth; // ivar: _virtualRightMarginWidth


-(id)initWithVirtualLeftMarginWidth:(CGFloat)arg0 virtualRightMarginWidth:(CGFloat)arg1 virtualLeftMarginStyle:(NSInteger)arg2 virtualRightMarginStyle:(NSInteger)arg3 ;


@end


#endif