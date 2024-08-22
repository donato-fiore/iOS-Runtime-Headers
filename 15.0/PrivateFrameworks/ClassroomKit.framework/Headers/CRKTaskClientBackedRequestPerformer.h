// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKTASKCLIENTBACKEDREQUESTPERFORMER_H
#define CRKTASKCLIENTBACKEDREQUESTPERFORMER_H

@class NSString, CATTaskClient;
@protocol CRKRequestPerformingProtocol;

#import <Foundation/Foundation.h>


@interface CRKTaskClientBackedRequestPerformer : NSObject <CRKRequestPerformingProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CATTaskClient *taskClient; // ivar: _taskClient


-(id)initWithTaskClient:(id)arg0 ;
-(id)operationForRequest:(id)arg0 ;


@end


#endif