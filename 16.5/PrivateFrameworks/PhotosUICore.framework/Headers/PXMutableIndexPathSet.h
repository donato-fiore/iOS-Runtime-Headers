// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMUTABLEINDEXPATHSET_H
#define PXMUTABLEINDEXPATHSET_H



#import "PXIndexPathSet.h"

@interface PXMutableIndexPathSet : PXIndexPathSet



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(void)minusIndexPathSet:(id)arg0 ;
-(void)modifyItemIndexSetForDataSourceIdentifier:(NSInteger)arg0 section:(NSInteger)arg1 usingBlock:(id)arg2 ;
-(void)modifySectionIndexSetForDataSourceIdentifier:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)modifySubitemIndexSetForDataSourceIdentifier:(NSInteger)arg0 section:(NSInteger)arg1 item:(NSInteger)arg2 usingBlock:(id)arg3 ;
-(void)removeAllIndexPaths;
-(void)removeIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(void)unionIndexPathSet:(id)arg0 ;


@end


#endif