// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSIMDEACTIVATIONEVENT_H
#define CTSIMDEACTIVATIONEVENT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTSimDeactivationEvent : NSObject <NSSecureCoding>



@property (nonatomic) BOOL isNetworkInitiated; // ivar: _isNetworkInitiated
@property (nonatomic) BOOL isRoaming; // ivar: _isRoaming
@property (retain, nonatomic) NSString *networkPlmn; // ivar: _networkPlmn
@property (retain, nonatomic) NSString *rat; // ivar: _rat
@property (retain, nonatomic) NSString *reasonCode; // ivar: _reasonCode
@property (nonatomic) NSUInteger sourceType; // ivar: _sourceType
@property (nonatomic) NSInteger timeOfEvent; // ivar: _timeOfEvent


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif