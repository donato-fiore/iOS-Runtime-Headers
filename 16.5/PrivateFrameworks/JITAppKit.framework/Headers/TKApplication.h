// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKAPPLICATION_H
#define TKAPPLICATION_H

@class NSURL, NSString;
@protocol TKApplicationDelegate;

#import <Foundation/Foundation.h>

#import "TKRepository.h"

@interface TKApplication : NSObject

@property (copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, nonatomic) NSString *bundleVersion;
@property (weak, nonatomic) NSObject<TKApplicationDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL ready; // ivar: _ready
@property (readonly, nonatomic) TKRepository *repository; // ivar: _repository


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)shared;
-(Class)loadClass:(id)arg0 ;
-(id)absoluteURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)loadPage:(id)arg0 ;
-(id)loadPage:(id)arg0 withData:(id)arg1 ;
-(id)loadPage:(id)arg0 withDataRequest:(id)arg1 ;
-(id)loadPageWithDataRequest:(id)arg0 ;
-(id)loadView:(id)arg0 ;
-(id)newErrorViewController:(id)arg0 ;
-(id)newLoadingViewController;
-(id)viewPathForName:(id)arg0 ;
-(void)clearBundleCache;
-(void)didLoadRepository:(id)arg0 ;
-(void)loadBundle:(id)arg0 completion:(id)arg1 ;


@end


#endif