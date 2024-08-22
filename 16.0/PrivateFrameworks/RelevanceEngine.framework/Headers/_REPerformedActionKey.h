// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _REPERFORMEDACTIONKEY_H
#define _REPERFORMEDACTIONKEY_H

@class NSString;
@protocol REDonatedActionIdentifierProviding;

#import <Foundation/Foundation.h>


@interface _REPerformedActionKey : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSObject<REDonatedActionIdentifierProviding> *identifier; // ivar: _identifier


+(id)keyForBundleIdentifier:(id)arg0 identifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif