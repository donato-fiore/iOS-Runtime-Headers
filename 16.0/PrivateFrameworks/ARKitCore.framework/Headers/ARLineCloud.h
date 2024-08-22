// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARLINECLOUD_H
#define ARLINECLOUD_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ARLineCloud : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *lines; // ivar: _lines


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLineCloudData:(id)arg0 ;


@end


#endif