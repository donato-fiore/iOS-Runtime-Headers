// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWKUIAQISEGMENTMODEL_H
#define NWKUIAQISEGMENTMODEL_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface NWKUIAQISegmentModel : NSObject

@property (readonly, getter=isActive) BOOL active; // ivar: _active
@property (readonly) UIColor *color; // ivar: _color


-(id)initWithColor:(id)arg0 active:(BOOL)arg1 ;


@end


#endif