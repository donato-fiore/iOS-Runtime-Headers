// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIOBADDTRUSTEDCONTACTSVIEWMODEL_H
#define AAUIOBADDTRUSTEDCONTACTSVIEWMODEL_H

@class AAOBAddTrustedContactsModel, UIView, AACustodianshipInfo, NSString, UIImage;
@protocol AAUIOBTableWelcomeControllerViewModelProtocol;



@interface AAUIOBAddTrustedContactsViewModel : AAOBAddTrustedContactsModel <AAUIOBTableWelcomeControllerViewModelProtocol>



@property (nonatomic) BOOL adoptTableViewScrollView; // ivar: _adoptTableViewScrollView
@property (copy, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) NSInteger contentViewLayout; // ivar: _contentViewLayout
@property (copy, nonatomic) AACustodianshipInfo *custodianshipInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *helpLinkTitle;
@property (copy, nonatomic) NSString *helpLinkURL;
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *leftBarButton;
@property (copy, nonatomic) NSString *ownerHandle;
@property (copy, nonatomic) NSString *primaryButton;
@property (copy, nonatomic) NSString *recipientHandle;
@property (copy, nonatomic) NSString *secondaryButton;
@property (copy, nonatomic) UIView *secondaryView; // ivar: _secondaryView
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tableViewStyle; // ivar: _tableViewStyle
@property (copy, nonatomic) NSString *title;


-(id)init;


@end


#endif