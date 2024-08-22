// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCLOUDWELCOMEGADGETPROVIDER_H
#define PXCLOUDWELCOMEGADGETPROVIDER_H

@class NSArray, NSDate;
@protocol PXForYouRankable, PXCMMCloudGadgetViewControllerDelegate;


#import "PXGadgetProvider.h"

@interface PXCloudWelcomeGadgetProvider : PXGadgetProvider <PXForYouRankable>



@property (copy, nonatomic) NSArray *contentGadgets; // ivar: _contentGadgets
@property (readonly, nonatomic) NSInteger forYouContentIdentifier;
@property (weak, nonatomic) NSObject<PXCMMCloudGadgetViewControllerDelegate> *gadgetDelegate; // ivar: _gadgetDelegate
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) NSUInteger sourceType; // ivar: _sourceType


+(id)new;
-(NSUInteger)estimatedNumberOfGadgets;
-(NSUInteger)gadgetType;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithSourceType:(NSUInteger)arg0 ;
-(id)priorityDate;
-(void)didUpdateCloudPhotoLibraryEnablement:(id)arg0 ;
-(void)generateGadgets;
-(void)presentationRequestForWelcomeCloudViewController:(id)arg0 ;
-(void)resetPriorityDate;


@end


#endif