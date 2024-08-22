// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCLOUDWELCOMEGADGETPROVIDER_H
#define PXCLOUDWELCOMEGADGETPROVIDER_H

@class NSArray, NSDate;
@protocol PXForYouRankable, PXCMMCloudGadgetViewControllerDelegate;


#import "PXGadgetProvider.h"

@interface PXCloudWelcomeGadgetProvider : PXGadgetProvider <PXForYouRankable>



@property (copy, nonatomic) NSArray *contentGadgets; // ivar: _contentGadgets
@property (readonly, nonatomic) NSInteger defaultPriority;
@property (weak, nonatomic) NSObject<PXCMMCloudGadgetViewControllerDelegate> *gadgetDelegate; // ivar: _gadgetDelegate
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) NSInteger priorityType;
@property (readonly, nonatomic) NSUInteger sourceType; // ivar: _sourceType


+(id)new;
-(NSUInteger)estimatedNumberOfGadgets;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithSourceType:(NSUInteger)arg0 ;
-(void)didUpdateCloudPhotoLibraryEnablement:(id)arg0 ;
-(void)generateGadgets;
-(void)presentationRequestForWelcomeCloudViewController:(id)arg0 ;


@end


#endif