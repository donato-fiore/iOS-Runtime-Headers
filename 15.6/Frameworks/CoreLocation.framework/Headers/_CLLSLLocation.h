// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CLLSLLOCATION_H
#define _CLLSLLOCATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_CLLSLLocationCoordinate.h"

@interface _CLLSLLocation : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGFloat altitude; // ivar: _altitude
@property (copy, nonatomic) _CLLSLLocationCoordinate *coordinate; // ivar: _coordinate
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithMemberIndent:(id)arg0 endIndent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinate:(id)arg0 ;
-(id)initWithCoordinate:(id)arg0 altitude:(CGFloat)arg1 timetamp:(CGFloat)arg2 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 altitude:(CGFloat)arg2 timetamp:(CGFloat)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif