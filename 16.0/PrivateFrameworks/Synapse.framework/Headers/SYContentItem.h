// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYCONTENTITEM_H
#define SYCONTENTITEM_H

@class NSData, NSURL, NSString, NSUUID, NSUserActivity, NSArray;
@protocol NSItemProviderReading, NSItemProviderWriting, NSCopying;

#import <Foundation/Foundation.h>


@interface SYContentItem : NSObject <NSItemProviderReading, NSItemProviderWriting, NSCopying>

 {
    NSData *_linkPreviewMetadata;
}


@property (readonly, copy, nonatomic) NSURL *activityCanonicalURL; // ivar: _activityCanonicalURL
@property (readonly, copy, nonatomic) NSString *activityPersistentIdentifier; // ivar: _activityPersistentIdentifier
@property (readonly, copy, nonatomic) NSString *activityTargetContentIdentifier; // ivar: _activityTargetContentIdentifier
@property (readonly, copy, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayTitle; // ivar: _displayTitle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, copy, nonatomic) NSURL *itemURL; // ivar: _itemURL
@property (retain) NSData *linkPreviewMetadata;
@property (nonatomic) NSInteger previewLoadLevel; // ivar: _previewLoadLevel
@property (readonly, copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (readonly, copy, nonatomic) NSString *sourceLastKnownName; // ivar: _sourceLastKnownName
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity
@property (readonly, copy, nonatomic) NSString *webpageDisplayDomain;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)representsSameContentAsItem:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithDisplayTitle:(id)arg0 sourceIdentifier:(id)arg1 sourceName:(id)arg2 itemURL:(id)arg3 ;
-(id)initWithDisplayTitle:(id)arg0 sourceIdentifier:(id)arg1 sourceName:(id)arg2 itemURL:(id)arg3 identifier:(id)arg4 ;
-(id)initWithItemIdentifier:(id)arg0 displayTitle:(id)arg1 sourceIdentifier:(id)arg2 sourceName:(id)arg3 itemURL:(id)arg4 activityType:(id)arg5 activityCanonicalURL:(id)arg6 activityTargetContentIdentifier:(id)arg7 activityPersistentIdentifier:(id)arg8 userActivity:(id)arg9 ;
-(id)initWithUserActivity:(id)arg0 sourceAppID:(id)arg1 ;
-(id)initWithUserActivity:(id)arg0 sourceAppID:(id)arg1 sourceAppName:(id)arg2 ;
-(id)initWithUserActivity:(id)arg0 sourceAppID:(id)arg1 sourceAppName:(id)arg2 identifier:(id)arg3 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(id)searchableItemLinkingRelatedIdentifier:(id)arg0 domainIdentifier:(id)arg1 ;
-(void)loadFullPreviewIfNeeded;
-(void)loadFullPreviewIfNeededWithCompletion:(id)arg0 ;


@end


#endif