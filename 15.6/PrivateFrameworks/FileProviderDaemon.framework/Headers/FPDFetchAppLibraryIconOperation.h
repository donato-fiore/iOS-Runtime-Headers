// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDFETCHAPPLIBRARYICONOPERATION_H
#define FPDFETCHAPPLIBRARYICONOPERATION_H

@class FPOperation, NSMutableArray, NSArray, NSProgress;
@protocol FPOperationClient;



@interface FPDFetchAppLibraryIconOperation : FPOperation <FPOperationClient>

 {
    CGSize _desiredSize;
    CGFloat _screenScale;
    NSMutableArray *_appBundleIDsNotFound;
}


@property (nonatomic) BOOL allowAppStoreLookup; // ivar: _allowAppStoreLookup
@property (nonatomic) BOOL allowLocalLookup; // ivar: _allowLocalLookup
@property (readonly, nonatomic) NSArray *appBundleIDs; // ivar: _appBundleIDs
@property (copy, nonatomic) id *perAppBundleCompletion; // ivar: _perAppBundleCompletion
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress


+(id)sharedOperationQueue;
-(BOOL)_checkIsNotPrefixedByTeamID:(id)arg0 ;
-(BOOL)_checkTypeIsValid:(id)arg0 ;
-(id)initWithAppBundleIDs:(id)arg0 desiredSize:(struct CGSize )arg1 screenScale:(CGFloat)arg2 ;
-(void)_perAppBundleCompletion:(id)arg0 iconData:(id)arg1 contentType:(id)arg2 error:(id)arg3 ;
-(void)_retrieveIconsFromAppStore;
-(void)_retrieveIconsFromLocalDevice;
-(void)_verifyAppBundleIDsFormat;
-(void)main;
-(void)operationDidProgressWithInfo:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif