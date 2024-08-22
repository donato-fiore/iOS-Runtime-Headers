// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTLOCATIONOFINTERESTVISIT_H
#define RTLOCATIONOFINTERESTVISIT_H

@class NSDate, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RTLocation.h"

@interface RTLocationOfInterestVisit : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDate *entryDate; // ivar: _entryDate
@property (readonly, nonatomic) NSDate *exitDate; // ivar: _exitDate
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) RTLocation *location; // ivar: _location
@property (readonly, nonatomic) CGFloat locationOfInterestConfidence; // ivar: _locationOfInterestConfidence
@property (readonly, nonatomic) NSUInteger locationOfInterestSource; // ivar: _locationOfInterestSource


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)entry;
-(id)entryTime;
-(id)exit;
-(id)exitTime;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 entry:(id)arg1 exit:(id)arg2 location:(id)arg3 locationOfInterestConfidence:(CGFloat)arg4 locationOfInterestSource:(NSUInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif