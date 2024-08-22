// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREQUESTRIDECONTEXTUALACTION_H
#define WFREQUESTRIDECONTEXTUALACTION_H

@class NSString, CLLocation;


#import "WFContextualAction.h"

@interface WFRequestRideContextualAction : WFContextualAction

@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (readonly, nonatomic) CLLocation *destination; // ivar: _destination
@property (readonly, copy, nonatomic) NSString *destinationName; // ivar: _destinationName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)showsUserInterfaceWhenRunning;
-(NSUInteger)hash;
-(id)initWithApplicationBundleIdentifier:(id)arg0 destination:(id)arg1 name:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif