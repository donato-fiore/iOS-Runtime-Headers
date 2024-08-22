// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NARAPPLICATIONSTATE_H
#define NARAPPLICATIONSTATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NARApplicationState : NSObject <NSSecureCoding>



@property (readonly, nonatomic, getter=isRemovedSystemApp) BOOL removedSystemApp; // ivar: _removedSystemApp
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted; // ivar: _restricted


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRestricted:(BOOL)arg0 removedSystemApp:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif