// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHISTORYSERVICEDATABASEDELEGATEWEAKPROXY_H
#define WBSHISTORYSERVICEDATABASEDELEGATEWEAKPROXY_H

@class NSString;
@protocol WBSHistoryServiceDatabaseDelegate;

#import <Foundation/Foundation.h>


@interface WBSHistoryServiceDatabaseDelegateWeakProxy : NSObject <WBSHistoryServiceDatabaseDelegate>

 {
    id<WBSHistoryServiceDatabaseDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)handleEvent:(id)arg0 completionHandler:(id)arg1 ;
-(void)reportPermanentIDsForItems:(id)arg0 completionHandler:(id)arg1 ;
-(void)reportPermanentIDsForVisits:(id)arg0 completionHandler:(id)arg1 ;
-(void)reportSevereError:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif