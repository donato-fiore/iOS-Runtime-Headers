// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRARRAY_H
#define CRARRAY_H

@class NSString, NSUUID;
@protocol CRCoding, CRUndoDelegate, CRDataType;

#import <Foundation/Foundation.h>

#import "TTArray.h"
#import "CRDictionary.h"
#import "CRDocument.h"

@interface CRArray : NSObject <CRCoding, CRUndoDelegate, CRDataType>



@property (retain, nonatomic) TTArray *array; // ivar: _array
@property (retain, nonatomic) CRDictionary *contents; // ivar: _contents
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CRUndoDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) CRDocument *document; // ivar: _document
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL moveClock; // ivar: _moveClock
@property (readonly, nonatomic) NSUUID *replicaUUID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)wantsUndoCommands;
-(NSUInteger)firstIndexOf:(id)arg0 fromIndex:(NSUInteger)arg1 ;
-(id)_addObject:(id)arg0 ;
-(id)_insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)_insertObject:(id)arg0 withIdentifier:(id)arg1 atIndex:(NSUInteger)arg2 forUndo:(BOOL)arg3 ;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)init;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithCRCoder:(id)arg0 array:(*void)arg1 ;
-(id)initWithDocument:(id)arg0 ;
-(id)initWithTTArray:(id)arg0 contents:(id)arg1 document:(id)arg2 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)tombstone;
-(void)addObject:(id)arg0 ;
-(void)addUndoCommandsForObject:(id)arg0 block:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)encodeWithCRCoder:(id)arg0 array:(*void)arg1 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)mergeWith:(id)arg0 ;
-(void)moveObjectFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)removeLastObject;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 forUndo:(BOOL)arg1 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif