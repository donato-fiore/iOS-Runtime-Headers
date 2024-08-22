// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSTRACKEDFIRSTPARTY_H
#define WBSTRACKEDFIRSTPARTY_H

@class NSArray;


#import "WBSTrackingCapableFirstParty.h"

@interface WBSTrackedFirstParty : WBSTrackingCapableFirstParty

@property (copy, nonatomic) NSArray *trackers; // ivar: _trackers


-(id)initWithDomain:(id)arg0 ;
-(id)initWithDomain:(id)arg0 trackers:(id)arg1 ;


@end


#endif