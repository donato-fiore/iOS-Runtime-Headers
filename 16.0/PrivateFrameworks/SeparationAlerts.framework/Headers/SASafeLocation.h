// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASAFELOCATION_H
#define SASAFELOCATION_H

@class NSDate, NSString, NSUUID;
@protocol OSLogCoding, TAEventProtocol;

#import <Foundation/Foundation.h>


@interface SASafeLocation : NSObject <OSLogCoding, TAEventProtocol>



@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, nonatomic) NSUInteger referenceFrame; // ivar: _referenceFrame
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReallyEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocationUUID:(id)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 radius:(CGFloat)arg3 referenceFrame:(NSUInteger)arg4 name:(id)arg5 date:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;


@end


#endif