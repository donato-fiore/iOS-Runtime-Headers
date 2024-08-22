// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCANCELABLEBACKEDCATALYSTIDSSUBSCRIPTION_H
#define CRKCANCELABLEBACKEDCATALYSTIDSSUBSCRIPTION_H

@protocol CATIDSSubscription, CRKCancelable;

#import <Foundation/Foundation.h>


@interface CRKCancelableBackedCatalystIDSSubscription : NSObject <CATIDSSubscription>



@property (readonly, nonatomic) NSObject<CRKCancelable> *cancelable; // ivar: _cancelable


-(id)initWithCancelable:(id)arg0 ;
-(void)cancel;


@end


#endif