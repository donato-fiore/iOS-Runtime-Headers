// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKPAGE_H
#define TKPAGE_H

@class TMLJSONObject, TMLContext, UIViewController, NSDictionary, NSURLRequest, NSString;
@protocol TKNetworkTask;

#import <Foundation/Foundation.h>


@interface TKPage : NSObject {
    TMLJSONObject *_dataObject;
    TMLContext *_context;
    UIViewController *_weakViewController;
    UIViewController *_loadingViewController;
    id<TKNetworkTask> *_networkTask;
    BOOL _ready;
}


@property (copy, nonatomic) NSDictionary *data;
@property (readonly, nonatomic) BOOL dataLoading; // ivar: _dataLoading
@property (copy, nonatomic) NSURLRequest *dataRequest; // ivar: _dataRequest
@property (nonatomic) BOOL shouldShowLoading; // ivar: _shouldShowLoading
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) NSString *viewName; // ivar: _viewName


-(id)createViewController;
-(id)initWithViewName:(id)arg0 ;
-(void)dataLoaded:(id)arg0 withError:(id)arg1 ;
-(void)dealloc;
-(void)didFinishLoading:(id)arg0 data:(id)arg1 responseError:(id)arg2 ;
-(void)didLoadData:(BOOL)arg0 ;
-(void)dispose;
-(void)hideLoadingViewController;
-(void)load;
-(void)loadData:(id)arg0 postData:(id)arg1 ;
-(void)loadRequest:(id)arg0 ;
-(void)reload;
-(void)reloadWithDelayedShowLoading:(BOOL)arg0 ;
-(void)showLoadingViewController;


@end


#endif