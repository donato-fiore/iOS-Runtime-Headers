// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WSPQUERYIN_H
#define WSPQUERYIN_H


#import <Foundation/Foundation.h>

#import "cNodeRestriction.h"
#import "wspContext.h"

@interface wspQueryIn : NSObject {
    ? msghdr;
}


@property (retain) cNodeRestriction *primaryCnodeRestriction; // ivar: _primaryCnodeRestriction
@property (retain) cNodeRestriction *secondaryCnodeRestriction; // ivar: _secondaryCnodeRestriction
@property (retain) wspContext *wctx; // ivar: _wctx


-(id)initWithCtx:(id)arg0 ;
-(id)makePrimaryCnodeRestriction;
-(id)makeSecondaryCnodeRestriction;
-(int)encodePrimaryQuery:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(int)encodeSecondaryQuery:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;


@end


#endif