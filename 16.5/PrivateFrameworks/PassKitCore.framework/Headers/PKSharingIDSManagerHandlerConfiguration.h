// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHARINGIDSMANAGERHANDLERCONFIGURATION_H
#define PKSHARINGIDSMANAGERHANDLERCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKSharingIDSManagerHandlerConfiguration : NSObject

@property (nonatomic) NSUInteger accessLevel; // ivar: _accessLevel
@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) NSUInteger sharingGroup; // ivar: _sharingGroup


-(id)description;
-(id)initWithSharingGroup:(NSUInteger)arg0 ;


@end


#endif