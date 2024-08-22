// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLHEADING_H
#define CLHEADING_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLHeading : NSObject <NSCopying, NSSecureCoding>

 {
    id *_internal;
}


@property (readonly, nonatomic) CGFloat headingAccuracy;
@property (readonly, nonatomic) CGFloat magneticHeading;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) CGFloat trueHeading;
@property (readonly, nonatomic) CGFloat x;
@property (readonly, nonatomic) CGFloat y;
@property (readonly, nonatomic) CGFloat z;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithClientHeading:(struct ? )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif