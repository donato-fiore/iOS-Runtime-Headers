// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDINSTALLATIONEVENT_H
#define ASDINSTALLATIONEVENT_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDInstallationEvent : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSInteger appType;
@property (readonly) NSString *bundleID; // ivar: _bundleID
@property (readonly) NSInteger installType; // ivar: _installType
@property (readonly) NSNumber *itemID; // ivar: _itemID
@property (readonly) NSInteger phase; // ivar: _phase
@property (readonly) NSInteger source;
@property (readonly) NSInteger terminalPhase; // ivar: _terminalPhase


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPhase:(NSInteger)arg0 terminalPhase:(NSInteger)arg1 bundleID:(id)arg2 itemID:(id)arg3 appType:(NSInteger)arg4 installType:(NSInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif