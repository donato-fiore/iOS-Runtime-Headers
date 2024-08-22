// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DESDODMLSERVER_H
#define DESDODMLSERVER_H

@class NSString, NSURL, PARSession, NSURLSession;
@protocol PARSessionDelegate, NSURLSessionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DESDodMLServer : NSObject <PARSessionDelegate, NSURLSessionDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_localeIdentifier;
    NSString *_deviceIdentifier;
    NSURL *_postbackBaseURL;
    PARSession *_parSession;
    NSURLSession *_session;
    CGFloat _timeLimit;
    NSUInteger _recipeCountLimit;
}


@property (readonly, copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)maybePostRecipeResponseToParsec:(id)arg0 recipeID:(id)arg1 uploadTransport:(id)arg2 ;
-(BOOL)submitLogWithJSONResult:(id)arg0 requestObject:(id)arg1 recipe:(id)arg2 error:(*id)arg3 ;
-(BOOL)uploadViaDediscoWithResult:(id)arg0 recipe:(id)arg1 error:(*id)arg2 ;
-(BOOL)uploadViaDediscoWithResult:(id)arg0 recipe:(id)arg1 inError:(id)arg2 outErrorPtr:(*id)arg3 ;
-(BOOL)validatePolicySignature:(id)arg0 bundleIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)verifyAttachment:(id)arg0 attachmentURL:(id)arg1 attachmentSignature:(id)arg2 ;
-(id)_removeLocalOnlyKeys:(id)arg0 ;
-(id)_requestObjectWithResult:(id)arg0 recipe:(id)arg1 error:(id)arg2 ;
-(id)decodePolicyFromPayload:(id)arg0 bundleIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)downloadedRecipeWithID:(id)arg0 bundleIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithBaseURL:(id)arg0 localeIdentifier:(id)arg1 protocolClass:(Class)arg2 ;
-(id)initWithBaseURL:(id)arg0 localeIdentifier:(id)arg1 protocolClass:(Class)arg2 sessionConfiguration:(id)arg3 ;
-(id)systemMetaData;
-(void)_runJSONGETRequestWithPath:(id)arg0 completion:(id)arg1 ;
-(void)_runJSONOrMultipartPOSTRequest:(id)arg0 path:(id)arg1 uploadTransport:(id)arg2 completion:(id)arg3 ;
-(void)_runJSONPOSTRequest:(id)arg0 path:(id)arg1 uploadTransport:(id)arg2 completion:(id)arg3 ;
-(void)_runPOSTRequestWithHTTPBody:(id)arg0 contentType:(id)arg1 URL:(id)arg2 completion:(id)arg3 ;
-(void)downloadAttachments:(id)arg0 signatures:(id)arg1 certificate:(id)arg2 completion:(id)arg3 ;
-(void)fetchPolicyForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchRecipe:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)invalidate;
-(void)invalidateInternal;
-(void)postRecipeResponse:(id)arg0 recipeID:(id)arg1 bundleIdentifier:(id)arg2 uploadTransport:(id)arg3 completion:(id)arg4 ;
-(void)runJSONPOSTRequest:(id)arg0 URL:(id)arg1 completion:(id)arg2 ;
-(void)sendRecipeResponseWithResult:(id)arg0 recipe:(id)arg1 uploadTransport:(id)arg2 error:(id)arg3 completion:(id)arg4 ;
-(void)session:(id)arg0 bag:(id)arg1 didLoadWithError:(id)arg2 ;
-(void)session:(id)arg0 didDeleteResource:(id)arg1 ;
-(void)session:(id)arg0 didDownloadResource:(id)arg1 ;
-(void)uploadViaLegacyRouteWithResult:(id)arg0 recipe:(id)arg1 uploadTransport:(id)arg2 error:(id)arg3 completion:(id)arg4 ;


@end


#endif