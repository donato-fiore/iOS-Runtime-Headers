// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TWTWEETCOMPOSEVIEWCONTROLLER_H
#define TWTWEETCOMPOSEVIEWCONTROLLER_H

@class UIViewController;



@interface TWTweetComposeViewController : UIViewController

@property (copy, nonatomic) id *completionHandler;


+(BOOL)canSendTweet;
-(BOOL)addImage:(id)arg0 ;
-(BOOL)addURL:(id)arg0 ;
-(BOOL)removeAllImages;
-(BOOL)removeAllURLs;
-(BOOL)setInitialText:(id)arg0 ;
-(id)addDownSampledImageDataByProxyWithPreviewImage:(SEL)arg0 ;
-(id)addURLWithProxyPreviewImage:(SEL)arg0 ;
-(id)init;
-(void)setLongitude:(CGFloat)arg0 latitude:(CGFloat)arg1 name:(id)arg2 ;


@end


#endif