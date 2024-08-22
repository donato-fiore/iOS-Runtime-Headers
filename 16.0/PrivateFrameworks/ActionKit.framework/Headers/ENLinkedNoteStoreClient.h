// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENLINKEDNOTESTORECLIENT_H
#define ENLINKEDNOTESTORECLIENT_H

@protocol ENLinkedNoteStoreClientDelegate;


#import "ENNoteStoreClient.h"
#import "ENLinkedNotebookRef.h"

@interface ENLinkedNoteStoreClient : ENNoteStoreClient

@property (weak, nonatomic) NSObject<ENLinkedNoteStoreClientDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) ENLinkedNotebookRef *linkedNotebookRef; // ivar: _linkedNotebookRef


+(id)noteStoreClientForLinkedNotebookRef:(id)arg0 ;
-(id)authenticationToken;
-(id)noteStoreUrl;


@end


#endif