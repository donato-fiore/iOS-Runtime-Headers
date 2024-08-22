// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPARSECSEARCHINDEXSTATE_H
#define MSPARSECSEARCHINDEXSTATE_H


#import <Foundation/Foundation.h>


@interface MSParsecSearchIndexState : NSObject

@property (readonly) NSInteger indexType; // ivar: _indexType
@property (readonly) NSInteger percentAttachmentsIndexed; // ivar: _percentAttachmentsIndexed
@property (readonly) NSInteger percentMessagesIndexed; // ivar: _percentMessagesIndexed


+(id)indexStateForMessagesIndexed:(id)arg0 indexableMessages:(id)arg1 attachmentsIndexed:(id)arg2 indexableAttachments:(id)arg3 ;
-(id)description;
-(id)initWithPercentMessagesIndexed:(NSInteger)arg0 percentAttachmentsIndexed:(NSInteger)arg1 indexType:(NSInteger)arg2 ;


@end


#endif