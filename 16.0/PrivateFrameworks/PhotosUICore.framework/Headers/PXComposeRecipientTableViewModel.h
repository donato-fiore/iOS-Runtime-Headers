// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCOMPOSERECIPIENTTABLEVIEWMODEL_H
#define PXCOMPOSERECIPIENTTABLEVIEWMODEL_H

@class NSArray, NSString;


#import "PXObservable.h"
#import "PXComposeRecipientDataSourceManager.h"
#import "PXPeopleSuggestionsMediaProvider.h"

@interface PXComposeRecipientTableViewModel : PXObservable

@property (readonly, nonatomic) BOOL canAddRecipients; // ivar: _canAddRecipients
@property (readonly, nonatomic) BOOL canDeleteRecipients; // ivar: _canDeleteRecipients
@property (readonly, nonatomic) BOOL canSelectRecipients; // ivar: _canSelectRecipients
@property (readonly, nonatomic) PXComposeRecipientDataSourceManager *composeRecipientDataSourceManager; // ivar: _composeRecipientDataSourceManager
@property (readonly, copy, nonatomic) NSArray *composeRecipients; // ivar: _composeRecipients
@property (readonly, copy, nonatomic) NSString *footerTitle; // ivar: _footerTitle
@property (readonly, copy, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (readonly, nonatomic) PXPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider; // ivar: _peopleSuggestionsMediaProvider
@property (readonly, copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) BOOL useGroupedBackgroundColor; // ivar: _useGroupedBackgroundColor


-(id)init;
-(id)initWithComposeRecipientDataSourceManager:(id)arg0 ;
-(void)performChanges:(id)arg0 ;


@end


#endif