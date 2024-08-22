// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFDAMESSAGESTORESEARCHRESULTBODYCONSUMER_H
#define _MFDAMESSAGESTORESEARCHRESULTBODYCONSUMER_H

@class MFConditionLock;
@protocol DAMailboxFetchSearchResultConsumer, DAMailboxStreamingContentConsumer, MFDAStreamingContentConsumer;

#import <Foundation/Foundation.h>

#import "MFError.h"

@interface _MFDAMessageStoreSearchResultBodyConsumer : NSObject <DAMailboxFetchSearchResultConsumer, DAMailboxStreamingContentConsumer>

 {
    MFConditionLock *_doneCondition;
}


@property (retain, nonatomic) MFError *error; // ivar: _error
@property (retain, nonatomic) NSObject<MFDAStreamingContentConsumer> *streamConsumer; // ivar: _streamConsumer


-(BOOL)shouldBeginStreamingForMailMessage:(id)arg0 format:(int)arg1 ;
-(BOOL)waitUntilDoneBeforeDate:(id)arg0 ;
-(id)init;
-(void)actionFailed:(NSInteger)arg0 forTask:(id)arg1 error:(id)arg2 ;
-(void)consumeData:(char *)arg0 length:(int)arg1 format:(int)arg2 mailMessage:(id)arg3 ;
-(void)didEndStreamingForMailMessage:(id)arg0 ;
-(void)searchResultFetchedWithResponses:(id)arg0 ;
-(void)waitUntilDone;


@end


#endif