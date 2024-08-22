// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTTEXTSTORAGEWITHRANGE_H
#define TTTEXTSTORAGEWITHRANGE_H

@class NSString, ICNote, NSManagedObjectContext, NSArray;
@protocol NSItemProviderWriting;

#import <Foundation/Foundation.h>

#import "TTTextStorage.h"

@interface TTTextStorageWithRange : NSObject <NSItemProviderWriting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICNote *note; // ivar: _note
@property (nonatomic) _NSRange range; // ivar: _range
@property (readonly) Class superclass;
@property (retain, nonatomic) TTTextStorage *textStorage; // ivar: _textStorage
@property (retain, nonatomic) NSManagedObjectContext *workerContext; // ivar: _workerContext
@property (retain, nonatomic) ICNote *workerContextNote; // ivar: _workerContextNote
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


-(NSUInteger)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg0 ;
-(id)_loadFileRepresentationOfTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(id)initWithTextStorage:(id)arg0 range:(struct _NSRange )arg1 note:(id)arg2 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(void)prepareTextStorage;


@end


#endif