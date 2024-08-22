// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMANOMALYEVENT_H
#define CMANOMALYEVENT_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMAnomalyEvent : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (nonatomic, getter=isAcknowledgement) BOOL acknowledgement; // ivar: _acknowledgement
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (nonatomic) NSInteger operatingMode; // ivar: _operatingMode
@property (nonatomic) NSInteger resolution; // ivar: _resolution
@property (nonatomic) NSInteger response; // ivar: _response
@property (nonatomic) NSInteger sosState; // ivar: _sosState
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSDate *updateDate;
@property (nonatomic) CGFloat updateTimestamp; // ivar: _updateTimestamp


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(NSUInteger)arg0 absoluteTimestamp:(CGFloat)arg1 updateTimestamp:(CGFloat)arg2 state:(NSInteger)arg3 response:(NSInteger)arg4 resolution:(NSInteger)arg5 sosState:(NSInteger)arg6 operatingMode:(NSInteger)arg7 ;
-(id)initWithIdentifier:(NSUInteger)arg0 absoluteTimestamp:(CGFloat)arg1 updateTimestamp:(CGFloat)arg2 state:(NSInteger)arg3 response:(NSInteger)arg4 resolution:(NSInteger)arg5 sosState:(NSInteger)arg6 operatingMode:(NSInteger)arg7 acknowledgement:(BOOL)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif