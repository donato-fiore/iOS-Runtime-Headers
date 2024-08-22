// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCTAGSEARCHRECORDSTREAM_H
#define FCTAGSEARCHRECORDSTREAM_H

@class CKQueryCursor, NSString, NSMutableSet;
@protocol FCStreaming;

#import <Foundation/Foundation.h>


@interface FCTagSearchRecordStream : NSObject <FCStreaming>



@property (retain, nonatomic) CKQueryCursor *cursor; // ivar: _cursor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *encounteredRecordIDs; // ivar: _encounteredRecordIDs
@property (nonatomic) BOOL fetching; // ivar: _fetching
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *operationConstructor; // ivar: _operationConstructor
@property (readonly) Class superclass;


-(id)fetchMoreResultsWithLimit:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(id)init;


@end


#endif