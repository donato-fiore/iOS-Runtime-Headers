// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCACTIVITY_H
#define DOCACTIVITY_H

@class UIActivity, NSString, UIImage, NSArray;
@protocol DOCItemActivityPerformer;



@interface DOCActivity : UIActivity

@property (readonly) NSObject<DOCItemActivityPerformer> *actionPerformerProxy; // ivar: _actionPerformerProxy
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *imageName; // ivar: _imageName
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


+(BOOL)isDestructiveActionIdentifier:(id)arg0 ;
+(NSInteger)_activityStyleForActivityIdentifier:(id)arg0 ;
+(NSInteger)activityCategory;
+(id)_activityWithIdentifier:(id)arg0 forBrowserAction:(id)arg1 actionPerformerProxy:(id)arg2 ;
+(id)_imageNameForActivityIdentifier:(id)arg0 ;
+(id)_titleForActivityIdentifier:(id)arg0 ;
+(id)activityForBrowserAction:(id)arg0 actionPerformerProxy:(id)arg1 ;
+(id)activityWithIdentifier:(id)arg0 actionPerformerProxy:(id)arg1 ;
-(BOOL)_needsResolvedActivityItems;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)initWithIdentifier:(id)arg0 actionPerformer:(id)arg1 forBrowserAction:(id)arg2 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;
-(void)validate;


@end


#endif