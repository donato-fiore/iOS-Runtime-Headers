// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIOBCONTACTSELECTORVIEWMODEL_H
#define AAUIOBCONTACTSELECTORVIEWMODEL_H

@class UIView, AACustodianshipInfo, NSString, UIImage, NSArray;
@protocol AAUIOBTableWelcomeControllerViewModelProtocol, AAOBWelcomeControllerModelProtocol;

#import <Foundation/Foundation.h>


@interface AAUIOBContactSelectorViewModel : NSObject <AAUIOBTableWelcomeControllerViewModelProtocol>

 {
    id<AAOBWelcomeControllerModelProtocol> *_model;
}


@property (nonatomic) BOOL adoptTableViewScrollView; // ivar: _adoptTableViewScrollView
@property (copy, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) NSInteger contentViewLayout; // ivar: _contentViewLayout
@property (copy, nonatomic) AACustodianshipInfo *custodianshipInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *helpLinkTitle; // ivar: _helpLinkTitle
@property (copy, nonatomic) NSString *helpLinkURL; // ivar: _helpLinkURL
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *ownerHandle;
@property (copy, nonatomic) NSString *primaryButton; // ivar: _primaryButton
@property (copy, nonatomic) NSString *recipientHandle;
@property (copy, nonatomic) NSString *secondaryButton; // ivar: _secondaryButton
@property (copy, nonatomic) UIView *secondaryView; // ivar: _secondaryView
@property (retain, nonatomic) NSArray *suggestedContacts; // ivar: _suggestedContacts
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tableViewStyle; // ivar: _tableViewStyle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)_modelForFlow:(NSUInteger)arg0 ;
-(id)initWithFlow:(NSUInteger)arg0 ;
-(void)_prepareModelForFlow:(NSUInteger)arg0 ;


@end


#endif