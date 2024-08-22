// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSBUCKETVIEW_H
#define PKPASSBUCKETVIEW_H

@class UIView, NSArray, NSMutableArray, NSMapTable, PKPass;


#import "PKPassBucketTemplate.h"
#import "PKPassColorProfile.h"

@interface PKPassBucketView : UIView {
    NSArray *_fieldViews;
    NSMutableArray *_currentFieldViews;
    NSInteger _background;
    NSMapTable *_templateToOriginalValueFontMap;
}


@property (retain, nonatomic) NSArray *bucket; // ivar: _bucket
@property (retain, nonatomic) PKPassBucketTemplate *bucketTemplate; // ivar: _bucketTemplate
@property (retain, nonatomic) PKPassColorProfile *colorProfile; // ivar: _colorProfile
@property (retain, nonatomic) PKPass *pass; // ivar: _pass


-(NSInteger)_backgroundForBucketTemplate:(id)arg0 ;
-(id)_fieldViewsByWidth;
-(id)description;
-(void)_measureAndFitEvenlySizedSubviews;
-(void)_measureAndFitVariablySizedSubviews;
-(void)_presentRecursiveDiff:(id)arg0 inView:(id)arg1 forSubviewAtIndex:(NSUInteger)arg2 withSubviews:(id)arg3 completion:(id)arg4 ;
-(void)_updateSubviews;
-(void)dealloc;
-(void)layoutSubviews;
-(void)presentDiff:(id)arg0 inView:(id)arg1 completion:(id)arg2 ;


@end


#endif