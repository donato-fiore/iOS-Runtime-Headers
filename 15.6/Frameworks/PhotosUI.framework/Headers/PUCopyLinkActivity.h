// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCOPYLINKACTIVITY_H
#define PUCOPYLINKACTIVITY_H

@class PXActivity, NSString;
@protocol PXMomentShareActivity, PXActivityItemSourceController;



@interface PUCopyLinkActivity : PXActivity <PXMomentShareActivity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXActivityItemSourceController> *itemSourceController;
@property (readonly) Class superclass;


+(BOOL)wantsMomentShareLinkForAssetCount:(NSInteger)arg0 ;
+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(void)performActivity;


@end


#endif