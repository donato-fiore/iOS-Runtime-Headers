// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPCORESPOTLIGHTEXTENSIONSTASK_H
#define SPCORESPOTLIGHTEXTENSIONSTASK_H


#import <Foundation/Foundation.h>


@interface SPCoreSpotlightExtensionsTask : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) id *filterBlock; // ivar: _filterBlock
@property (copy, nonatomic) id *performBlock; // ivar: _performBlock


-(void)_performWithExtensionsEnumerator:(id)arg0 completionBlock:(id)arg1 ;
-(void)start;


@end


#endif