// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCOMPOSERECIPIENTDATASOURCEMANAGER_H
#define PXCOMPOSERECIPIENTDATASOURCEMANAGER_H

@class NSMutableArray, NSMutableSet, NSString, NSDictionary;
@protocol PXSectionedDataSourceManagerObserver, PXTapToRadar, PXComposeRecipientDataSourceManagerDelegate;

#import <Foundation/Foundation.h>

#import "PXComposeRecipientDataSource.h"
#import "PXPeopleSuggestionsDataSource.h"
#import "PXPeopleSuggestionsDataSourceManager.h"

@interface PXComposeRecipientDataSourceManager : NSObject <PXSectionedDataSourceManagerObserver, PXTapToRadar>

 {
    NSMutableArray *_composeRecipients;
    NSMutableSet *_recipients;
}


@property (retain, nonatomic) PXComposeRecipientDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXComposeRecipientDataSourceManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *diagnosticDictionary;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfPeopleSuggested; // ivar: _numberOfPeopleSuggested
@property (retain, nonatomic) PXPeopleSuggestionsDataSource *peopleSuggestionsDataSource; // ivar: _peopleSuggestionsDataSource
@property (retain, nonatomic) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager; // ivar: _peopleSuggestionsDataSourceManager
@property (readonly, nonatomic) NSInteger sourceType; // ivar: _sourceType
@property (readonly) Class superclass;


-(NSInteger)_lastValidComposeRecipientIndex;
-(id)_composeRecipientsFromCurrentPeopleSuggestionsDataSource;
-(id)_createComposeRecipientDataSourceFromCurrentState;
-(id)init;
-(id)initWithPeopleSuggestionsDataSourceManager:(id)arg0 sourceType:(NSInteger)arg1 ;
-(void)_addComposeRecipients:(id)arg0 ;
-(void)_replaceComposeRecipientAtIndex:(NSInteger)arg0 withComposeRecipient:(id)arg1 ;
-(void)addRecipients:(id)arg0 ;
-(void)deleteComposeRecipientAtIndex:(NSUInteger)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)replaceComposeRecipientAtIndex:(NSUInteger)arg0 withNewComposeRecipient:(id)arg1 ;


@end


#endif