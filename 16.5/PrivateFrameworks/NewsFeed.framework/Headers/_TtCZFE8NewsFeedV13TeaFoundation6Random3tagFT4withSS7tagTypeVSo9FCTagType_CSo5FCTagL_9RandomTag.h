// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCZFE8NEWSFEEDV13TEAFOUNDATION6RANDOM3TAGFT4WITHSS7TAGTYPEVSO9FCTAGTYPE_CSO5FCTAGL_9RANDOMTAG_H
#define _TTCZFE8NEWSFEEDV13TEAFOUNDATION6RANDOM3TAGFT4WITHSS7TAGTYPEVSO9FCTAGTYPE_CSO5FCTAGL_9RANDOMTAG_H

@class FCTag, NSArray;



@interface _TtCZFE8NewsFeedV13TeaFoundation6Random3tagFT4withSS7tagTypeVSo9FCTagType_CSo5FCTagL_9RandomTag : FCTag

@property (nonatomic, readonly) NSArray *currentIssueIDs;


-(id)init;
-(id)initChannelForTestingWithIdentifier:(id)arg0 name:(id)arg1 defaultSection:(id)arg2 publisherAuthorizationURL:(id)arg3 publisherVerificationURL:(id)arg4 ;
-(id)initChannelForTestingWithIdentifier:(id)arg0 name:(id)arg1 publisherPaidBundlePurchaseIDs:(id)arg2 ;
-(id)initChannelFromNotificationWithIdentifier:(id)arg0 name:(id)arg1 nameImageAssetHandle:(id)arg2 nameImageMaskAssetHandle:(id)arg3 ;
-(id)initForTestingWithTagType:(NSUInteger)arg0 identifier:(id)arg1 name:(id)arg2 ;
-(id)initForTestingWithTagType:(NSUInteger)arg0 identifier:(id)arg1 name:(id)arg2 umcCanonicalID:(id)arg3 ;
-(id)initWithData:(id)arg0 context:(id)arg1 ;
-(id)initWithTagMetadata:(id)arg0 assetManager:(id)arg1 isSports:(BOOL)arg2 ;
-(id)initWithTagRecord:(id)arg0 assetManager:(id)arg1 interestToken:(id)arg2 ;
-(id)initWithTagType:(NSUInteger)arg0 identifier:(id)arg1 name:(id)arg2 ;


@end


#endif