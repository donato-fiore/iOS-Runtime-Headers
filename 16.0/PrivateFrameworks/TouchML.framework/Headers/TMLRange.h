// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLRANGE_H
#define TMLRANGE_H

@protocol TMLRangeJSExports, NSCopying;

#import <Foundation/Foundation.h>


@interface TMLRange : NSObject <TMLRangeJSExports, NSCopying>

 {
    _NSRange _range;
}


@property (readonly, nonatomic) NSUInteger length;
@property (readonly, nonatomic) NSUInteger location;


+(void)initializeJSContext:(id)arg0 ;
-(id)NSRangeValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithRange:(struct _NSRange )arg0 ;


@end


#endif