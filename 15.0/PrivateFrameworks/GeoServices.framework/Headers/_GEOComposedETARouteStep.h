// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOCOMPOSEDETAROUTESTEP_H
#define _GEOCOMPOSEDETAROUTESTEP_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GEOTimeCheckpoints.h"

@interface _GEOComposedETARouteStep : NSObject <NSSecureCoding>



@property (nonatomic) CGFloat length; // ivar: _length
@property (nonatomic) NSUInteger stepID; // ivar: _stepID
@property (retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints; // ivar: _timeCheckpoints
@property (nonatomic) CGFloat travelDuration; // ivar: _travelDuration


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)descriptionWithPrecision:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif