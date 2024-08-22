// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTAGGREGATOR_H
#define TSTAGGREGATOR_H

@class TSPObject;


#import "TSTAggNode.h"
#import "TSTCategoryOwner.h"
#import "TSTGroupBy.h"

@interface TSTAggregator : TSPObject {
    TSTAggNode *_aggRoot;
}


@property (readonly, nonatomic) TSTCategoryOwner *categoryOwner;
@property (readonly, nonatomic) TSKUIDStruct columnUid; // ivar: _columnUid
@property (weak, nonatomic) TSTGroupBy *groupBy; // ivar: _groupBy


-(?)cellRefsForAggNodesAtGroup;
-(?)cellRefsForRowIndexestableUID;
-(id)aggNodeForGroupNode:(id)arg0 ;
-(id)description;
-(id)initWithArchive:(*void)arg0 groupBy:(id)arg1 ;
-(id)initWithColumn:(struct TSKUIDStruct )arg0 context:(id)arg1 ;
-(id)initWithColumn:(struct TSKUIDStruct )arg0 forGroupBy:(id)arg1 ;
-(void)clearAggFormulas:(id)arg0 ;
-(void)encodeToArchive:(*void)arg0 ;
-(void)loadFromArchive:(*void)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)rebuildAggFormulas;
-(void)saveToArchiver:(id)arg0 ;
-(void)unpackAfterUnarchiveForGroupBy:(id)arg0 ;
-(void)upgradeForNewAggregateTypes:(id)arg0 ;


@end


#endif