// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMDISCOVERABILITYSIGNALEVENT_H
#define BMDISCOVERABILITYSIGNALEVENT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface BMDiscoverabilitySignalEvent : NSObject

@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy, nonatomic) NSString *context; // ivar: _context
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)new;
-(id)description;
-(id)init;
-(id)initWithIdentifier:(id)arg0 bundleID:(id)arg1 context:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 bundleID:(id)arg1 context:(id)arg2 userInfo:(id)arg3 ;


@end


#endif