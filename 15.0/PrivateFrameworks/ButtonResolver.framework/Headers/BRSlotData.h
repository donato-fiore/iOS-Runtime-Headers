// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRSLOTDATA_H
#define BRSLOTDATA_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "BRAsset.h"

@interface BRSlotData : NSObject

@property (retain, nonatomic) BRAsset *asset; // ivar: _asset
@property (nonatomic) BOOL isProgrammed; // ivar: _isProgrammed
@property (readonly, nonatomic) id *propertyList;
@property (nonatomic) NSUInteger refCount; // ivar: _refCount
@property (copy, nonatomic) NSNumber *slot; // ivar: _slot


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSlotData:(id)arg0 ;
-(void)dealloc;


@end


#endif