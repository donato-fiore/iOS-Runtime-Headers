// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKTRANSIENTPASSASSERTION_H
#define NPKTRANSIENTPASSASSERTION_H

@class NSString;


#import "NPKTransientAssertion.h"

@interface NPKTransientPassAssertion : NPKTransientAssertion

@property (nonatomic) BOOL disableCardSelection; // ivar: _disableCardSelection
@property (nonatomic) BOOL requestServiceMode; // ivar: _requestServiceMode
@property (retain, nonatomic) NSString *uniqueID; // ivar: _uniqueID


-(id)initWithPassWithUniqueID:(id)arg0 ;
-(void)_resyncState;


@end


#endif