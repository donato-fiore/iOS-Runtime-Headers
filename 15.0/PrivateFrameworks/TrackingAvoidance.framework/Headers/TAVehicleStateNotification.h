// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TAVEHICLESTATENOTIFICATION_H
#define TAVEHICLESTATENOTIFICATION_H

@class NSDate, NSString;
@protocol OSLogCoding, TAEventProtocol;

#import <Foundation/Foundation.h>


@interface TAVehicleStateNotification : NSObject <OSLogCoding, TAEventProtocol>



@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger operatorState; // ivar: _operatorState
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger vehicularHints; // ivar: _vehicularHints
@property (readonly, nonatomic) NSUInteger vehicularState; // ivar: _vehicularState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVehicularState:(NSUInteger)arg0 andVehicularHints:(NSUInteger)arg1 andOperatorState:(NSUInteger)arg2 date:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;


@end


#endif