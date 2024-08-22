// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEVIEWSORTRULE_H
#define TSTTABLEVIEWSORTRULE_H



#import "TSTTableSortRule.h"

@interface TSTTableViewSortRule : TSTTableSortRule

@property (readonly, nonatomic) TSUViewColumnOrRowIndex viewIndex; // ivar: _viewIndex


+(id)ruleWithViewIndex:(struct TSUViewColumnOrRowIndex )arg0 direction:(int)arg1 ;
-(id)initFromArchive:(*void)arg0 ;
-(id)initWithViewIndex:(struct TSUViewColumnOrRowIndex )arg0 direction:(int)arg1 ;
-(struct TSUModelColumnOrRowIndex )baseIndex;
-(void)encodeToArchive:(*void)arg0 ;


@end


#endif