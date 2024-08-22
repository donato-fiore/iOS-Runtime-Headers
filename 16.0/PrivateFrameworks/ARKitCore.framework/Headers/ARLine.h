// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARLINE_H
#define ARLINE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ARLine : NSObject <NSCopying>

 {
    ? _startPoint;
    ? _endPoint;
}


@property ? endPoint;
@property (nonatomic) NSUInteger identifier; // ivar: _identifier
@property ? startPoint;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif