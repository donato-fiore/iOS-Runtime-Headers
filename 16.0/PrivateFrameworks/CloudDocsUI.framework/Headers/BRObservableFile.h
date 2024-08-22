// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BROBSERVABLEFILE_H
#define BROBSERVABLEFILE_H

@class NSString;
@protocol NSObservable;

#import <Foundation/Foundation.h>

#import "_BRObservableFilePresenter.h"

@interface BRObservableFile : NSObject <NSObservable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) _BRObservableFilePresenter *presenter; // ivar: _presenter
@property (readonly) Class superclass;


+(id)observerForKey:(id)arg0 onFileURL:(id)arg1 ;
+(void)_applicationDidBecomeActive:(id)arg0 ;
+(void)_applicationWillResignActive:(id)arg0 ;
+(void)_deregisterInstance:(id)arg0 ;
+(void)_registerForApplicationLifecycleNotifications;
+(void)_registerInstance:(id)arg0 ;
-(id)addObserverBlock:(id)arg0 ;
-(id)initWithKey:(id)arg0 fileURL:(id)arg1 ;
-(void)dealloc;


@end


#endif