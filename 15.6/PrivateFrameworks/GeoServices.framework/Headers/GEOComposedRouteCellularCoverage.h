// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPOSEDROUTECELLULARCOVERAGE_H
#define GEOCOMPOSEDROUTECELLULARCOVERAGE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOComposedRouteCellularCoverage : NSObject <NSSecureCoding>

 {
    NSData *_offsetsData;
    NSData *_coverageData;
    *unsigned int _offsets;
    *int _coverage;
    NSUInteger _coverageCount;
    CGFloat _routeLength;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOffsets:(id)arg0 coverage:(id)arg1 routeLength:(CGFloat)arg2 ;
-(int)cellularCoverageAtOffset:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateCoverageRangesWithBlock:(id)arg0 ;


@end


#endif