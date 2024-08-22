// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUDISCOVERABILITYSIGNAL_H
#define TUDISCOVERABILITYSIGNAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TUDiscoverabilitySignal : NSObject

@property (readonly, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


+(id)osBuild;
-(id)_discoverabilitySignalsStream;
-(id)initWithIdentifier:(id)arg0 context:(id)arg1 ;
-(void)donateSignalWithCompletion:(id)arg0 ;


@end


#endif