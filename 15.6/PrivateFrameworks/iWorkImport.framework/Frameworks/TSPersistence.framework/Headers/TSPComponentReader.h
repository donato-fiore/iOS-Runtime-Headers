// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPCOMPONENTREADER_H
#define TSPCOMPONENTREADER_H

@class NSString;
@protocol TSPComponentParserDelegate, TSUStreamReadChannel;


#import "TSPReader.h"

@interface TSPComponentReader : TSPReader <TSPComponentParserDelegate>

 {
    id<TSUStreamReadChannel> *_readChannel;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)unknownObjectMessageInfo;
-(BOOL)componentParser:(id)arg0 didReadArchiveInfo:(*void)arg1 stream:(struct DispatchDataInputStream *)arg2 error:(*id)arg3 ;
-(BOOL)shouldProceedParsingOnFailure;
-(id)initWithComponent:(id)arg0 finalizeHandlerQueue:(id)arg1 delegate:(id)arg2 ;
-(id)initWithComponent:(id)arg0 finalizeHandlerQueue:(id)arg1 delegate:(id)arg2 readChannel:(id)arg3 ;
-(id)initWithComponent:(id)arg0 finalizeHandlerQueue:(id)arg1 delegate:(id)arg2 readChannel:(id)arg3 ignoreUnknownContent:(BOOL)arg4 ignoreVersionChecking:(BOOL)arg5 ;
-(id)newUnarchiverWithArchiveInfo:(*void)arg0 stream:(struct DispatchDataInputStream *)arg1 isUnknownObject:(*BOOL)arg2 ;
-(id)newUnarchiverWithObjectIdentifier:(NSInteger)arg0 messageInfo:(*void)arg1 unarchiveClass:(Class)arg2 message:(*void)arg3 messageVersion:(NSUInteger)arg4 strongReferences:(struct unique_ptr<TSP::IdentifierMap<bool>, std::default_delete<TSP::IdentifierMap<bool>>> )arg5 unknownContent:(id)arg6 hasAlternateMessages:(BOOL)arg7 ;
-(id)unknownMessageFromMessageInfo:(*void)arg0 stream:(struct DispatchDataInputStream *)arg1 ;
-(id)unknownObjectUnarchiverWithArchiveInfo:(*void)arg0 stream:(struct DispatchDataInputStream *)arg1 ignoreMessageData:(BOOL)arg2 hasAlternateMessages:(BOOL)arg3 ;
-(void)beginReadingWithCompletionQueue:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)didUnarchiveObject:(id)arg0 withUnarchiver:(id)arg1 ;


@end


#endif