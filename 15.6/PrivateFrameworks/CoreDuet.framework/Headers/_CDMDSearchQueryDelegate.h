// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDMDSEARCHQUERYDELEGATE_H
#define _CDMDSEARCHQUERYDELEGATE_H

@class NSMutableArray, NSString;
@protocol MDSearchQueryDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface _CDMDSearchQueryDelegate : NSObject <MDSearchQueryDelegate>

 {
    NSObject<OS_dispatch_semaphore> *_mdQuerySem;
    NSMutableArray *_recentMDSearchQueryResults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)searchQuery:(id)arg0 didFailWithError:(id)arg1 ;
-(void)searchQuery:(id)arg0 didReturnItems:(id)arg1 ;
-(void)searchQuery:(id)arg0 statusChanged:(NSUInteger)arg1 ;


@end


#endif