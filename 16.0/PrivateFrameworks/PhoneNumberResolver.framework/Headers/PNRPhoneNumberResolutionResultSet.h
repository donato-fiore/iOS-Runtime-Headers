// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PNRPHONENUMBERRESOLUTIONRESULTSET_H
#define PNRPHONENUMBERRESOLUTIONRESULTSET_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PNRPhoneNumberResolutionResultSet : NSObject {
    NSMutableDictionary *_results;
    os_unfair_lock_s _resultsLock;
}




-(id)description;
-(id)init;
-(void)enumerateResolutionsUsingBlock:(id)arg0 ;
-(void)setError:(id)arg0 forPhoneNumber:(id)arg1 ;
-(void)setResult:(id)arg0 resultDataSource:(NSInteger)arg1 forPhoneNumber:(id)arg2 ;


@end


#endif