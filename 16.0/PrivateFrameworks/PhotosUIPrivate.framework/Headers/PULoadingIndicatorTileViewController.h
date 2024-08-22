// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PULOADINGINDICATORTILEVIEWCONTROLLER_H
#define PULOADINGINDICATORTILEVIEWCONTROLLER_H



#import "PUTileViewController.h"
#import "PUProgressIndicatorView.h"

@interface PULoadingIndicatorTileViewController : PUTileViewController

@property (retain, nonatomic) PUProgressIndicatorView *indicatorView; // ivar: _indicatorView
@property (nonatomic) NSInteger style; // ivar: _style


+(id)_createIndicatorViewForStyle:(NSInteger)arg0 ;
+(struct CGSize )loadingIndicatorTileSizeForStyle:(NSInteger)arg0 ;
+(void)_destroyIndicatorView:(id)arg0 ;
-(void)becomeReusable;


@end


#endif