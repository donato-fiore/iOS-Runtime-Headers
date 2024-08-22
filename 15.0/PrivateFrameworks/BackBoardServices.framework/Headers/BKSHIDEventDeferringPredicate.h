// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSHIDEVENTDEFERRINGPREDICATE_H
#define BKSHIDEVENTDEFERRINGPREDICATE_H

@class NSString;
@protocol NSSecureCoding, BSDescriptionStreamable, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "BKSHIDEventDisplay.h"
#import "BKSHIDEventDeferringEnvironment.h"
#import "BKSHIDEventDeferringToken.h"

@interface BKSHIDEventDeferringPredicate : NSObject <NSSecureCoding, BSDescriptionStreamable, NSCopying, NSMutableCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) BKSHIDEventDisplay *display; // ivar: _display
@property (readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *token; // ivar: _token


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithEnvironment:(id)arg0 display:(id)arg1 token:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif