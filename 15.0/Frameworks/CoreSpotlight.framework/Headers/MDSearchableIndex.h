// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDSEARCHABLEINDEX_H
#define MDSEARCHABLEINDEX_H



#import "CSSearchableIndex.h"

@interface MDSearchableIndex : CSSearchableIndex



+(id)sharedInstance;
-(void)indexSearchableItems:(id)arg0 stateInfo:(id)arg1 completionHandler:(id)arg2 ;
-(void)performIndexJob:(id)arg0 protectionClass:(id)arg1 acknowledgementHandler:(id)arg2 ;


@end


#endif