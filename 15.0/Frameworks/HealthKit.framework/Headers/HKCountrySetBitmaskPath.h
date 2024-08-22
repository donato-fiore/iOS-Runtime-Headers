// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCOUNTRYSETBITMASKPATH_H
#define HKCOUNTRYSETBITMASKPATH_H


#import <Foundation/Foundation.h>


@interface HKCountrySetBitmaskPath : NSObject

@property (readonly, nonatomic) NSUInteger bitmask; // ivar: _bitmask
@property (readonly, nonatomic) NSInteger index; // ivar: _index


+(id)pathWithBitmask:(NSUInteger)arg0 index:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif