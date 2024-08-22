// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVACLLOCATION_H
#define CVACLLOCATION_H


#import <Foundation/Foundation.h>


@interface CVACLLocation : NSObject

@property (nonatomic) CGFloat altitude; // ivar: _altitude
@property (nonatomic) CGFloat course; // ivar: _course
@property (nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) CGFloat timestampSince1970; // ivar: _timestampSince1970
@property (nonatomic) CGFloat verticalAccuracy; // ivar: _verticalAccuracy


-(id)dictionary;
-(id)initWithCLLocation:(id)arg0 timestamp:(CGFloat)arg1 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif