// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTABLEVIEWCELL_H
#define MKTABLEVIEWCELL_H

@class UITableViewCell;



@interface MKTableViewCell : UITableViewCell {
    BOOL __mapkit_separatorStyleOverrideEnabled;
}


@property (nonatomic) BOOL _mapkit_forceSeparatorFrameToCGRectZero; // ivar: __mapkit_forceSeparatorFrameToCGRectZero
@property (nonatomic) NSInteger _mapkit_separatorStyleOverride; // ivar: __mapkit_separatorStyleOverride


-(struct CGRect )_separatorFrame;
-(void)_mapkit_disableSeparatorStyleOverride;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setSeparatorStyle:(NSInteger)arg0 ;


@end


#endif