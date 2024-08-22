// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTAGGREGATOR_H
#define TSTAGGREGATOR_H


#import <Foundation/Foundation.h>

#import "TSTAggNode.h"
#import "TSTCategoryOwner.h"
#import "TSTGroupBy.h"

@interface TSTAggregator : NSObject {
    TSTAggNode *_aggRoot;
}


@property (readonly, nonatomic) TSTCategoryOwner *categoryOwner;
@property (readonly, nonatomic) TSKUIDStruct columnUid; // ivar: _columnUid
@property (readonly, weak, nonatomic) TSTGroupBy *groupBy; // ivar: _groupBy


-(?)cellRefsForAggNodesAtGroup;
-(?)cellRefsForRowIndexestableUID;
-(id)aggNodeForGroupNode:(id)arg0 ;
-(id)description;
-(id)initWithArchive:(*void)arg0 groupBy:(id)arg1 ;
-(id)initWithColumn:(struct TSKUIDStruct )arg0 forGroupBy:(id)arg1 ;
-(void)clearAggFormulas:(id)arg0 ;
-(void)encodeToArchive:(*void)arg0 ;
-(void)rebuildAggFormulas;
-(void)upgradeForNewAggregateTypes:(id)arg0 ;


@end


#endif