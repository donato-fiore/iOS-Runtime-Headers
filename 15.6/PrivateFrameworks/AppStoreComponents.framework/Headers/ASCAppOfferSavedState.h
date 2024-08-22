// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCAPPOFFERSAVEDSTATE_H
#define ASCAPPOFFERSAVEDSTATE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ASCOfferMetadata.h"

@interface ASCAppOfferSavedState : NSObject

@property (readonly, nonatomic) NSInteger flags; // ivar: _flags
@property (readonly, nonatomic) BOOL isActionable;
@property (readonly, nonatomic) BOOL isLoadingFullState;
@property (readonly, copy, nonatomic) ASCOfferMetadata *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSString *state; // ivar: _state


-(id)initWithState:(id)arg0 metadata:(id)arg1 flags:(NSInteger)arg2 ;


@end


#endif