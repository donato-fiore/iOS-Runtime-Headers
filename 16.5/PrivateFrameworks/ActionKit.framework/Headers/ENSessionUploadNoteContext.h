// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENSESSIONUPLOADNOTECONTEXT_H
#define ENSESSIONUPLOADNOTECONTEXT_H


#import <Foundation/Foundation.h>

#import "EDAMNote.h"
#import "ENNoteRef.h"
#import "ENNoteStoreClient.h"
#import "ENNotebook.h"

@interface ENSessionUploadNoteContext : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) EDAMNote *note; // ivar: _note
@property (retain, nonatomic) ENNoteRef *noteRef; // ivar: _noteRef
@property (retain, nonatomic) ENNoteStoreClient *noteStore; // ivar: _noteStore
@property (retain, nonatomic) ENNotebook *notebook; // ivar: _notebook
@property (nonatomic) NSInteger policy; // ivar: _policy
@property (copy, nonatomic) id *progress; // ivar: _progress
@property (retain, nonatomic) ENNoteRef *refToReplace; // ivar: _refToReplace




@end


#endif