// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTARRAY_H
#define TTARRAY_H

@class NSString, NSArray, NSUUID;
@protocol CRCoding, TTMergeableStringDelegate, CRDataType, CRUndoDelegate;

#import <Foundation/Foundation.h>

#import "TTMergeableAttributedString.h"
#import "CRDocument.h"

@interface TTArray : NSObject <CRCoding, TTMergeableStringDelegate, CRDataType>



@property (readonly, nonatomic) TTMergeableAttributedString *contents; // ivar: _contents
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRUndoDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) CRDocument *document; // ivar: _document
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *nsArray;
@property (readonly, nonatomic) NSUUID *replicaUUID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)wantsUndoCommands;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)init;
-(id)initWithArchive:(*void)arg0 andReplicaID:(id)arg1 ;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithCRCoder:(id)arg0 stringArray:(*void)arg1 ;
-(id)initWithContents:(id)arg0 ;
-(id)initWithDocument:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)serializeDataFromArchive:(*void)arg0 ;
-(id)textAttachmentAtIndex:(NSUInteger)arg0 ;
-(id)tombstone;
-(void)addObject:(id)arg0 ;
-(void)addUndoCommand:(id)arg0 ;
-(void)beginEditing;
-(void)edited:(NSUInteger)arg0 range:(struct _NSRange )arg1 changeInLength:(NSInteger)arg2 ;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)endEditing;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)mergeWith:(id)arg0 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif