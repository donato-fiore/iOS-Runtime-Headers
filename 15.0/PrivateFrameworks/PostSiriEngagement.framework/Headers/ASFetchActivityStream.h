// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASFETCHACTIVITYSTREAM_H
#define ASFETCHACTIVITYSTREAM_H

@class SAFetchActivityStream, NSString;
@protocol AFServiceCommand;



@interface ASFetchActivityStream : SAFetchActivityStream <AFServiceCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)fetchActivityStreamWithPredicate:(id)arg0 completion:(id)arg1 ;
-(void)performWithCompletion:(id)arg0 ;


@end


#endif