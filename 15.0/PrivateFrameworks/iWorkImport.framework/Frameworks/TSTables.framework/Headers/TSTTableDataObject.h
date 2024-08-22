// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTTABLEDATAOBJECT_H
#define TSTTABLEDATAOBJECT_H

@class TSDCommentStorage, TSUCustomFormat, TSKFormat, TSWPStorage, NSString, TSSStyle;
@protocol TSPCopying, TSTTableDataPayloadHashing;

#import <Foundation/Foundation.h>

#import "TSTCellSpec.h"
#import "TSTConditionalStyleSet.h"
#import "TSTImportWarningSet.h"
#import "TSTPopUpMenuModel.h"

@interface TSTTableDataObject : NSObject <TSPCopying>



@property (readonly, nonatomic) NSUInteger byteSizeForArchiving; // ivar: _byteSizeForArchiving
@property (readonly, nonatomic) TSTCellSpec *cellSpec;
@property (readonly, nonatomic) TSDCommentStorage *commentStorage;
@property (readonly, nonatomic) TSTConditionalStyleSet *conditionalStyleSet;
@property (readonly, nonatomic) TSUCustomFormat *customFormat;
@property (readonly, nonatomic) TSKFormat *format;
@property (readonly, nonatomic) TSWPStorage *formulaError;
@property (readonly, nonatomic) TSTImportWarningSet *importWarningSet;
@property (nonatomic) unsigned int key; // ivar: _key
@property (retain, nonatomic) NSObject<TSTTableDataPayloadHashing> *payload; // ivar: _payload
@property (readonly, nonatomic) TSTPopUpMenuModel *popUpMenuModel;
@property (readonly, nonatomic) unsigned int refCount; // ivar: _refCount
@property (readonly, nonatomic) TSWPStorage *richTextStorage;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) TSSStyle *style;


+(id)objectWithRefCount:(unsigned int)arg0 ;
+(void)loadObjectFromArchive:(*void)arg0 listType:(int)arg1 unarchiver:(id)arg2 completion:(id)arg3 ;
-(BOOL)dropReference;
-(BOOL)dropReferences:(unsigned int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)estimateByteSize;
-(NSUInteger)hash;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithRefCount:(unsigned int)arg0 ;
-(void)addReferencesFromObject:(id)arg0 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 completion:(id)arg2 ;
-(void)p_sharedInitWithRefCount:(unsigned int)arg0 key:(unsigned int)arg1 ;
-(void)sharedLoadFromArchive:(*void)arg0 ;
-(void)takeReference;
-(void)takeReferences:(unsigned int)arg0 ;


@end


#endif