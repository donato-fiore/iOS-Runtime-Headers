// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HLPHELPBOOKCONTROLLER_H
#define HLPHELPBOOKCONTROLLER_H

@class NSArray, NSString, NSURL, NSMutableDictionary, HLPURLImageCacheController;


#import "HLPRemoteDataController.h"
#import "HLPHelpLocale.h"
#import "HLPHelpSectionItem.h"

@interface HLPHelpBookController : HLPRemoteDataController

@property (copy, nonatomic) NSArray *additionalSupportedLanguages; // ivar: _additionalSupportedLanguages
@property (retain, nonatomic) NSString *bookId; // ivar: _bookId
@property (nonatomic) NSInteger contentFormatVersion; // ivar: _contentFormatVersion
@property (retain, nonatomic) NSString *contentVersion; // ivar: _contentVersion
@property (retain, nonatomic) NSString *copyrightText; // ivar: _copyrightText
@property (retain, nonatomic) NSString *copyrightTopicIdentifier; // ivar: _copyrightTopicIdentifier
@property (nonatomic) BOOL fullBookView; // ivar: _fullBookView
@property (nonatomic) BOOL hasSectionIcon; // ivar: _hasSectionIcon
@property (retain, nonatomic) NSURL *helpBookURL; // ivar: _helpBookURL
@property (retain, nonatomic) NSMutableDictionary *helpItemMap; // ivar: _helpItemMap
@property (retain, nonatomic) NSString *iconBasePath; // ivar: _iconBasePath
@property (retain, nonatomic) HLPURLImageCacheController *imageCacheController; // ivar: _imageCacheController
@property (retain, nonatomic) HLPHelpLocale *locale; // ivar: _locale
@property (nonatomic) BOOL platformIndependent; // ivar: _platformIndependent
@property (retain, nonatomic) NSString *remoteCSSearchIndex; // ivar: _remoteCSSearchIndex
@property (retain, nonatomic) NSString *remoteSearchPath; // ivar: _remoteSearchPath
@property (retain, nonatomic) HLPHelpSectionItem *rootSectionItem; // ivar: _rootSectionItem
@property (readonly, nonatomic, getter=isSemanticHTML) BOOL semanticHTML;
@property (nonatomic) NSInteger serverType; // ivar: _serverType
@property (retain, nonatomic) NSString *topicPathFormat; // ivar: _topicPathFormat
@property (retain, nonatomic) NSString *welcomeTopicIdentifier; // ivar: _welcomeTopicIdentifier


-(id)copyrightTopicItem;
-(id)dynamicServerSectionsForIdentifiers:(id)arg0 level:(NSInteger)arg1 parent:(id)arg2 tocMap:(id)arg3 ;
-(id)helpItemForID:(id)arg0 ;
-(id)helpTopicItemForID:(id)arg0 ;
-(id)helpTopicItemForName:(id)arg0 ;
-(id)sectionsForChildrenIdentifiers:(id)arg0 level:(NSInteger)arg1 parent:(id)arg2 sectionsMap:(id)arg3 topicsMap:(id)arg4 ;
-(id)systemLanguages;
-(id)welcomeTopicItem;
-(void)addAsideTopic:(id)arg0 ;
-(void)dealloc;
-(void)fetchDataWithDataType:(NSInteger)arg0 identifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)processData:(id)arg0 formattedData:(id)arg1 ;
-(void)processFileURLWithCompletionHandler:(id)arg0 ;


@end


#endif