// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FOAUTHORIZATIONRECORD_H
#define FOAUTHORIZATIONRECORD_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FOAuthorizationRecord : NSObject <NSSecureCoding>



@property (readonly, copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSUUID *recordIdentifier; // ivar: _recordIdentifier
@property (readonly) NSInteger status; // ivar: _status
@property (readonly, copy) NSString *teamIdentifier; // ivar: _teamIdentifier
@property (readonly) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithBundleIdentifier:(id)arg0 teamIdentifier:(id)arg1 recordIdentifier:(id)arg2 status:(NSInteger)arg3 type:(NSInteger)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif