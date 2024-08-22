// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HK_TPSDISCOVERABILITYSIGNAL_H
#define HK_TPSDISCOVERABILITYSIGNAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HK_TPSDiscoverabilitySignal : NSObject

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