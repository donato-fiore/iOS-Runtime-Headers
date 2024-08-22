// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFAVICONREQUESTSCONTROLLER_H
#define WBSFAVICONREQUESTSCONTROLLER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "WBSSiteMetadataManager.h"

@interface WBSFaviconRequestsController : NSObject {
    NSMapTable *_tokenToRequestToken;
}


@property (readonly, nonatomic) WBSSiteMetadataManager *manager; // ivar: _manager
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) CGSize size; // ivar: _size


-(id)initWithSiteMetadataManager:(id)arg0 ;
-(void)_issueRequest:(id)arg0 isOneTime:(BOOL)arg1 withToken:(id)arg2 completion:(id)arg3 ;
-(void)cancelAllRegistrations;
-(void)cancelAllRegistrationsWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)registerOneTimeRequestForDomain:(id)arg0 withToken:(id)arg1 completion:(id)arg2 ;
-(void)registerOneTimeRequestForURLString:(id)arg0 withToken:(id)arg1 completion:(id)arg2 ;
-(void)registerOneTimeRequestForURLString:(id)arg0 withToken:(id)arg1 returnDefaultIconIfNoneAvailable:(BOOL)arg2 iconSize:(struct CGSize )arg3 isURLTypedByUser:(BOOL)arg4 completion:(id)arg5 ;
-(void)registerRequestForDomain:(id)arg0 withToken:(id)arg1 completion:(id)arg2 ;
-(void)registerRequestForURLString:(id)arg0 withToken:(id)arg1 completion:(id)arg2 ;
-(void)registerRequestForURLString:(id)arg0 withToken:(id)arg1 returnDefaultIconIfNoneAvailable:(BOOL)arg2 iconSize:(struct CGSize )arg3 isURLTypedByUser:(BOOL)arg4 completion:(id)arg5 ;


@end


#endif