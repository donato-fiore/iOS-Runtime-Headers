// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFUIRUSEREVENT_H
#define WFUIRUSEREVENT_H

@class NSString, NSData, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFUIRUserEvent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *actionName; // ivar: _actionName
@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, nonatomic) NSString *localizedActionName; // ivar: _localizedActionName
@property (readonly, nonatomic) NSString *processName; // ivar: _processName
@property (readonly, nonatomic) NSData *screenCaptureData; // ivar: _screenCaptureData
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout
@property (readonly, nonatomic) NSArray *uiEvents; // ivar: _uiEvents
@property (readonly, nonatomic) NSString *userDescription; // ivar: _userDescription


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(id)serializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif