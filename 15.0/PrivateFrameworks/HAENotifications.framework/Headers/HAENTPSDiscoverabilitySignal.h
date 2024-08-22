// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAENTPSDISCOVERABILITYSIGNAL_H
#define HAENTPSDISCOVERABILITYSIGNAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HAENTPSDiscoverabilitySignal : NSObject

@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *context; // ivar: _context
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier


+(id)osBuild;
-(id)_discoverabilitySignalsStream;
-(id)_knowledgeStore;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 context:(id)arg2 ;
-(void)donateSignalWithCompletion:(id)arg0 ;


@end


#endif