// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGBACKDROPVIEW_H
#define PGBACKDROPVIEW_H

@class PGView, CAFilter, NSString;



@interface PGBackdropView : PGView {
    CAFilter *_gaussianBlurFilter;
    CAFilter *_averageColorFilter;
}


@property (nonatomic) CGFloat backdropScale;
@property (nonatomic) CGFloat gaussianBlurRadius;
@property (copy, nonatomic) NSString *groupName;


+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateFilters;
-(void)dealloc;


@end


#endif