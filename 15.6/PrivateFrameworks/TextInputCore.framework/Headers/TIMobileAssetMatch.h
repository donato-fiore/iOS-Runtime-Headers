// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIMOBILEASSETMATCH_H
#define TIMOBILEASSETMATCH_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TIMobileAssetMatch : NSObject

@property (readonly, nonatomic) NSArray *inputModeLevels; // ivar: _inputModeLevels
@property (readonly, nonatomic) NSArray *regions; // ivar: _regions
@property (readonly, nonatomic) NSArray *types; // ivar: _types


+(id)knownAssetRegionAttributes;
+(id)mobileAssetMatchWithTypes:(id)arg0 inputModeLevels:(id)arg1 regions:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithTypes:(id)arg0 inputModeLevels:(id)arg1 regions:(id)arg2 ;


@end


#endif