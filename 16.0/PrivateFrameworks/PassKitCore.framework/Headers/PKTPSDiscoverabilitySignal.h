// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTPSDISCOVERABILITYSIGNAL_H
#define PKTPSDISCOVERABILITYSIGNAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKTPSDiscoverabilitySignal : NSObject

@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *context; // ivar: _context
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier


-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 context:(id)arg2 ;
-(void)donateSignalWithCompletion:(id)arg0 ;


@end


#endif