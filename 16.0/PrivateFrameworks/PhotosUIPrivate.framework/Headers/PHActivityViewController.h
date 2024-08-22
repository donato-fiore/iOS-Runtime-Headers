// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHACTIVITYVIEWCONTROLLER_H
#define PHACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController, NSArray, NSString;
@protocol PXActivityDataSource;



@interface PHActivityViewController : UIActivityViewController <PXActivityDataSource>



@property (copy, nonatomic, setter=_setPHActivityItems:) NSArray *_PHActivityItems; // ivar: __PHActivityItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activityItemsForActivity:(id)arg0 ;
-(id)activityViewControllerForActivity:(id)arg0 ;
-(id)initWithActivityItems:(id)arg0 applicationActivities:(id)arg1 ;
-(void)_updateActivityItems:(id)arg0 ;


@end


#endif