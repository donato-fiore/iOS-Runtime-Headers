// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TAPREDICTEDLOCATIONOFINTEREST_H
#define TAPREDICTEDLOCATIONOFINTEREST_H

@class NSDate, NSString;
@protocol OSLogCoding, TAEventProtocol;

#import <Foundation/Foundation.h>


@interface TAPredictedLocationOfInterest : NSObject <OSLogCoding, TAEventProtocol>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat horizontalAccuracy; // ivar: _horizontalAccuracy
@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly, nonatomic) NSDate *nextEntryTime; // ivar: _nextEntryTime
@property (readonly, nonatomic) NSUInteger referenceFrame; // ivar: _referenceFrame
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 horizontalAccuracy:(CGFloat)arg3 confidence:(CGFloat)arg4 nextEntryTime:(id)arg5 date:(id)arg6 ;
-(id)initWithType:(NSUInteger)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 horizontalAccuracy:(CGFloat)arg3 referenceFrame:(NSUInteger)arg4 confidence:(CGFloat)arg5 nextEntryTime:(id)arg6 date:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;


@end


#endif