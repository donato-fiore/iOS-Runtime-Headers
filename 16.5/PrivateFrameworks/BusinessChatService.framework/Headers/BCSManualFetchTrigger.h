// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSMANUALFETCHTRIGGER_H
#define BCSMANUALFETCHTRIGGER_H

@class NSString;
@protocol BCSFetchTrigger;

#import <Foundation/Foundation.h>


@interface BCSManualFetchTrigger : NSObject <BCSFetchTrigger>

 {
    id *_fetchBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)scheduleFetchBlock:(id)arg0 ;
-(void)triggerFetchForReason:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif