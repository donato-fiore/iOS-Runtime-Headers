// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKPRODUCTPAGEEXTENSION_H
#define SKPRODUCTPAGEEXTENSION_H

@class UIViewController, NSString;
@protocol SKProductPageExtensionServiceInterface;



@interface SKProductPageExtension : UIViewController <SKProductPageExtensionServiceInterface>



@property (nonatomic) BOOL askToBuy; // ivar: _askToBuy
@property (copy, nonatomic) NSString *cancelButtonTitle; // ivar: _cancelButtonTitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *promptString; // ivar: _promptString
@property (copy, nonatomic) NSString *rightBarButtonTitle; // ivar: _rightBarButtonTitle
@property (nonatomic) BOOL showsRightBarButton; // ivar: _showsRightBarButton
@property (nonatomic) BOOL showsStoreButton; // ivar: _showsStoreButton
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(id)clientInterface;
+(id)serviceInterface;
-(BOOL)lookupItemDidLoad:(id)arg0 parameters:(id)arg1 ;
-(id)_createNavigationItem;
-(void)cancelButtonPressed:(id)arg0 ;
-(void)clientLookupItemDidLoad:(id)arg0 parameters:(id)arg1 ;
-(void)finishWithResult:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)loadDidFinish;
-(void)rightBarButtonPressed:(id)arg0 ;
-(void)setPreview:(id)arg0 ;
-(void)setUsageContext:(id)arg0 ;
-(void)setVisibleInClientWindow:(id)arg0 ;
-(void)setupWithClientBundleID:(id)arg0 ;
-(void)setupWithClientBundleID:(id)arg0 bagType:(NSInteger)arg1 ;
-(void)setupWithCustomNavigationItem:(id)arg0 promptString:(id)arg1 askToBuy:(BOOL)arg2 ;
-(void)storeButtonPressed:(id)arg0 ;


@end


#endif