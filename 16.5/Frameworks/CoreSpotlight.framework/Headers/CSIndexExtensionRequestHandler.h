// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSINDEXEXTENSIONREQUESTHANDLER_H
#define CSINDEXEXTENSIONREQUESTHANDLER_H

@class NSString;
@protocol NSExtensionRequestHandling, CSSearchableIndexDelegate;

#import <Foundation/Foundation.h>


@interface CSIndexExtensionRequestHandler : NSObject <NSExtensionRequestHandling, CSSearchableIndexDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)dealloc;
-(void)index:(id)arg0 reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(id)arg2 ;
-(void)reindexAllSearchableItemsForIndex:(id)arg0 acknowledgementHandler:(id)arg1 ;
-(void)searchableIndex:(id)arg0 reindexAllSearchableItemsWithAcknowledgementHandler:(id)arg1 ;
-(void)searchableIndex:(id)arg0 reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(id)arg2 ;
-(void)searchableIndexDidFinishThrottle:(id)arg0 ;
-(void)searchableIndexDidThrottle:(id)arg0 ;


@end


#endif