// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFDATAREFRESHSTATE_H
#define PBFDATAREFRESHSTATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PBFDataRefreshState : NSObject

@property (readonly, nonatomic) BOOL needsRefresh; // ivar: _needsRefresh
@property (readonly, copy, nonatomic) NSString *refreshReason; // ivar: _refreshReason


-(id)initWithNeedsRefresh:(BOOL)arg0 reason:(id)arg1 ;


@end


#endif