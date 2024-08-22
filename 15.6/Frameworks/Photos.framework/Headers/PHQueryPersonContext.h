// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHQUERYPERSONCONTEXT_H
#define PHQUERYPERSONCONTEXT_H


#import <Foundation/Foundation.h>

#import "PHFetchOptions.h"

@interface PHQueryPersonContext : NSObject {
    PHFetchOptions *_fetchOptions;
}




+(id)subpredicatesForFetchOptions:(id)arg0 ;
-(id)_faceCountPredicateWithMinimum:(NSUInteger)arg0 ;
-(id)_notHiddenTypePredicate;
-(id)_notVerifiedPredicate;
-(id)_verifiedPredicate;
-(id)_verifiedVisiblePredicate;
-(id)initWithFetchOptions:(id)arg0 ;
-(id)personContextAdditionalPredicate;
-(id)personContextDetailPredicate;
-(id)personContextNonePredicates;
-(id)personContextOneUpPredicate;
-(id)personContextPeopleHomePredicate;
-(id)subpredicates;


@end


#endif