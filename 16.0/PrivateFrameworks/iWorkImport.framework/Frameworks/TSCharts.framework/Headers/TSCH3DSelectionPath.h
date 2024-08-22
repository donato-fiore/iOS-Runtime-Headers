// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DSELECTIONPATH_H
#define TSCH3DSELECTIONPATH_H



#import "TSCHSelectionPath.h"

@interface TSCH3DSelectionPath : TSCHSelectionPath

@property (readonly, nonatomic) Class sceneObjectClass; // ivar: _sceneObjectClass
@property (readonly, nonatomic) NSUInteger styleIndex; // ivar: _styleIndex


+(id)selectionPathWithClass:(Class)arg0 styleIndex:(NSUInteger)arg1 selectionPath:(id)arg2 ;
+(id)selectionPathWithClass:(Class)arg0 styleIndex:(NSUInteger)arg1 type:(id)arg2 name:(id)arg3 arguments:(id)arg4 ;
-(id)initWithClass:(Class)arg0 styleIndex:(NSUInteger)arg1 type:(id)arg2 name:(id)arg3 arguments:(id)arg4 ;


@end


#endif