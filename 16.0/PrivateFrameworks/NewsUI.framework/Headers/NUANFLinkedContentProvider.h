// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUANFLINKEDCONTENTPROVIDER_H
#define NUANFLINKEDCONTENTPROVIDER_H

@class NSString, NSDictionary;
@protocol NULinkedContentProvider, FCContentContext;

#import <Foundation/Foundation.h>


@interface NUANFLinkedContentProvider : NSObject <NULinkedContentProvider>



@property (readonly, nonatomic) NSObject<FCContentContext> *contentContext; // ivar: _contentContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *linkedHeadlines; // ivar: _linkedHeadlines
@property (copy, nonatomic) NSDictionary *linkedIssues; // ivar: _linkedIssues
@property (copy, nonatomic) NSDictionary *linkedTags; // ivar: _linkedTags
@property (readonly) Class superclass;


-(id)headlineForIdentifier:(id)arg0 ;
-(id)initWithContentContext:(id)arg0 ;
-(id)issueForIdentifier:(id)arg0 ;
-(id)loadLinkedArticlesWithIDs:(id)arg0 priority:(NSInteger)arg1 completion:(id)arg2 ;
-(id)loadLinkedContentForHeadline:(id)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(id)loadLinkedContentForHeadline:(id)arg0 withContext:(id)arg1 priority:(NSInteger)arg2 completion:(id)arg3 ;
-(id)loadLinkedIssuesWithIDs:(id)arg0 priority:(NSInteger)arg1 completion:(id)arg2 ;
-(id)loadLinkedTagsWithIDs:(id)arg0 priority:(NSInteger)arg1 completion:(id)arg2 ;
-(id)tagForIdentifier:(id)arg0 ;


@end


#endif