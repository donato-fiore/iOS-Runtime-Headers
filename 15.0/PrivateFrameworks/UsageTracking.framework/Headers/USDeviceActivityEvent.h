// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USDEVICEACTIVITYEVENT_H
#define USDEVICEACTIVITYEVENT_H

@class NSSet, NSDateComponents;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface USDeviceActivityEvent : NSObject <NSSecureCoding>



@property (readonly, copy) NSSet *applicationTokens; // ivar: _applicationTokens
@property (readonly, copy) NSSet *categoryTokens; // ivar: _categoryTokens
@property (readonly) BOOL includesAllActivity;
@property (readonly, copy) NSDateComponents *threshold; // ivar: _threshold
@property (readonly, copy) NSSet *webDomainTokens; // ivar: _webDomainTokens


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithApplicationTokens:(id)arg0 categoryTokens:(id)arg1 webDomainTokens:(id)arg2 threshold:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif