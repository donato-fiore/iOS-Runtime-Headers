// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESCHUNK_H
#define DESCHUNK_H

@class NSNumber, NSMutableData, NSString;

#import <Foundation/Foundation.h>


@interface DESChunk : NSObject

@property (retain, nonatomic) NSNumber *clippingBound; // ivar: _clippingBound
@property (readonly, nonatomic) NSMutableData *data; // ivar: _data
@property (readonly, nonatomic) NSString *key; // ivar: _key


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithKey:(id)arg0 clippingBound:(id)arg1 data:(id)arg2 ;


@end


#endif