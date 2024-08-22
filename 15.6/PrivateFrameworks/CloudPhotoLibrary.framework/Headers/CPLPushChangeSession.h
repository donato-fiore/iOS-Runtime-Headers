// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLPUSHCHANGESESSION_H
#define CPLPUSHCHANGESESSION_H

@class NSString;
@protocol CPLAbstractObject;


#import "CPLChangeSession.h"
#import "CPLPlatformObject.h"

@interface CPLPushChangeSession : CPLChangeSession <CPLAbstractObject>

 {
    CGFloat _startWaitingForBatch;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


+(id)shortDescription;
-(id)initWithLibraryManager:(id)arg0 ;
-(void)commitChangeBatch:(id)arg0 completionHandler:(id)arg1 ;
-(void)commitChangeBatch:(id)arg0 withUnderlyingCompletionHandler:(id)arg1 ;


@end


#endif