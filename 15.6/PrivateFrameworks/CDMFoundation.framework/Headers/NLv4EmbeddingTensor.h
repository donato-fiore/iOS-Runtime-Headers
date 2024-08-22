// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLV4EMBEDDINGTENSOR_H
#define NLV4EMBEDDINGTENSOR_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NLv4EmbeddingTensor : NSObject <NSCopying>



@property (retain, nonatomic) NSArray *values; // ivar: _values


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif