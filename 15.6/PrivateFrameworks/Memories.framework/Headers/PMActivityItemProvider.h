// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMACTIVITYITEMPROVIDER_H
#define PMACTIVITYITEMPROVIDER_H

@class UIActivityItemProvider, NSString, UIViewController, PUActivityProgressController, LPLinkMetadata;
@protocol PMActivityItemProviderDelegate, MiroPreventDismissalDelegate, OS_dispatch_semaphore;


#import "MiroMovie.h"
#import "VEKProduction.h"
#import "VEKResult.h"

@interface PMActivityItemProvider : UIActivityItemProvider {
    BOOL _debugDisableProgressUpdates;
}


@property (weak, nonatomic) NSObject<PMActivityItemProviderDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat exportAspect; // ivar: _exportAspect
@property (retain, nonatomic) NSString *exportedFilePath; // ivar: _exportedFilePath
@property (retain, nonatomic) MiroMovie *miroMovie; // ivar: _miroMovie
@property (weak, nonatomic) UIViewController *presenter;
@property (retain, nonatomic) NSString *preset; // ivar: _preset
@property (weak, nonatomic) NSObject<MiroPreventDismissalDelegate> *preventDismissalDelegate; // ivar: _preventDismissalDelegate
@property (retain, nonatomic) VEKProduction *production; // ivar: _production
@property (retain, nonatomic) PUActivityProgressController *progressController; // ivar: _progressController
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *readyToReturnItem; // ivar: _readyToReturnItem
@property (retain, nonatomic) VEKResult *result; // ivar: _result
@property (retain, nonatomic) LPLinkMetadata *shareHeaderMetadata; // ivar: _shareHeaderMetadata
@property (retain, nonatomic) NSString *shareMetadataSummary; // ivar: _shareMetadataSummary
@property (retain, nonatomic) NSString *shareMetadataTitle; // ivar: _shareMetadataTitle
@property (nonatomic) BOOL userCancelled; // ivar: _userCancelled


-(id)_stringFromTimeInterval:(CGFloat)arg0 ;
-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewControllerLinkMetadata:(id)arg0 ;
-(id)initWithPlaceholderItem:(id)arg0 ;
-(id)initWithProduction:(id)arg0 result:(id)arg1 ;
-(id)item;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_unloadVEKObjects;
-(void)beginExport;
-(void)cancelExport;


@end


#endif