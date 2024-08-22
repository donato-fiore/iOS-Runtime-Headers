// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPHOTOPICKERACTIONSMODEL_H
#define CNPHOTOPICKERACTIONSMODEL_H

@class NSString, NSArray, NSIndexPath;
@protocol CNPhotoPickerActionsDelegate;

#import <Foundation/Foundation.h>

#import "CNPhotoPickerActionButton.h"
#import "CNPhotoPickerProviderItem.h"

@interface CNPhotoPickerActionsModel : NSObject

@property (retain, nonatomic) NSString *assignActionTitleOverride; // ivar: _assignActionTitleOverride
@property (nonatomic) BOOL buttonsDisabled; // ivar: _buttonsDisabled
@property (nonatomic) BOOL canDelete; // ivar: _canDelete
@property (retain, nonatomic) NSArray *currentInlineActionButtons; // ivar: _currentInlineActionButtons
@property (weak, nonatomic) NSObject<CNPhotoPickerActionsDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CNPhotoPickerActionButton *deleteButton; // ivar: _deleteButton
@property (retain, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, nonatomic) NSArray *inlineActionButtons;
@property (retain, nonatomic) CNPhotoPickerProviderItem *providerItem; // ivar: _providerItem


+(BOOL)actionIsDestructive:(NSInteger)arg0 ;
+(NSUInteger)maximumNumberOfButtons;
+(id)buttonForActionType:(NSInteger)arg0 titleOverride:(id)arg1 withActionBlock:(id)arg2 ;
+(id)buttonForActionType:(NSInteger)arg0 withActionBlock:(id)arg1 ;
+(id)localizedTitleForActionType:(NSInteger)arg0 ;
-(BOOL)canPerformActionType:(NSInteger)arg0 ;
-(id)generateInlineActionButtons;
-(id)initWithProviderItem:(id)arg0 assignActionTitleOverride:(id)arg1 canDelete:(BOOL)arg2 atIndexPath:(id)arg3 ;
-(void)didTapAssignToContact;
-(void)didTapDelete;
-(void)didTapDuplicate;
-(void)didTapEdit;
-(void)updateProviderItem:(id)arg0 ;


@end


#endif