// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDRAGGINGSYSTEMTOUCHROUTINGPOLICY_H
#define UIDRAGGINGSYSTEMTOUCHROUTINGPOLICY_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UIDraggingSystemTouchRoutingPolicy : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *contextIDsToAlwaysSendTouches; // ivar: _contextIDsToAlwaysSendTouches
@property (copy, nonatomic) NSArray *contextIDsToExcludeFromHitTesting; // ivar: _contextIDsToExcludeFromHitTesting
@property (nonatomic, getter=isHitTestingDisabled) BOOL hitTestingDisabled; // ivar: _hitTestingDisabled


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif