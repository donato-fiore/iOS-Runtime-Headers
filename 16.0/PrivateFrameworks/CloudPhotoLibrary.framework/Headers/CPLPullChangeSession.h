// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLPULLCHANGESESSION_H
#define CPLPULLCHANGESESSION_H

@class NSString;
@protocol CPLAbstractObject;


#import "CPLChangeSession.h"
#import "CPLPlatformObject.h"

@interface CPLPullChangeSession : CPLChangeSession <CPLAbstractObject>

 {
    CGFloat _sentBatchTimeInterval;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


+(id)shortDescription;
-(void)acknowledgeChangeBatch:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getChangeBatchWithCompletionHandler:(id)arg0 ;


@end


#endif