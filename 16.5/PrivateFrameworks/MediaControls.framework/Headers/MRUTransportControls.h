// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUTRANSPORTCONTROLS_H
#define MRUTRANSPORTCONTROLS_H


#import <Foundation/Foundation.h>

#import "MRUTransportControlItem.h"

@interface MRUTransportControls : NSObject

@property (readonly, nonatomic) MRUTransportControlItem *centerItem; // ivar: _centerItem
@property (readonly, nonatomic) MRUTransportControlItem *leadingItem; // ivar: _leadingItem
@property (readonly, nonatomic) MRUTransportControlItem *leftItem; // ivar: _leftItem
@property (readonly, nonatomic) MRUTransportControlItem *rightItem; // ivar: _rightItem


-(BOOL)isEqual:(id)arg0 ;
-(id)centerItemFromResponse:(id)arg0 ;
-(id)description;
-(id)initWithMPCResponse:(id)arg0 ;
-(id)leadingItemFromResponse:(id)arg0 ;
-(id)leftItemFromResponse:(id)arg0 ;
-(id)rightItemFromResponse:(id)arg0 ;


@end


#endif