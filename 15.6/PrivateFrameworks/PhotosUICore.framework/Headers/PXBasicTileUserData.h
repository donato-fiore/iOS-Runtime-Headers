// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXBASICTILEUSERDATA_H
#define PXBASICTILEUSERDATA_H


#import <Foundation/Foundation.h>

#import "PXViewSpec.h"

@interface PXBasicTileUserData : NSObject

@property (readonly, nonatomic) PXViewSpec *viewSpec; // ivar: _viewSpec


+(id)userDataWithViewSpec:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithViewSpec:(id)arg0 ;
-(id)init;


@end


#endif