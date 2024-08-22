// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBCOREAVFLOADERDELEGATE_H
#define WEBCOREAVFLOADERDELEGATE_H

@class NSString;
@protocol AVAssetResourceLoaderDelegate;

#import <Foundation/Foundation.h>


@interface WebCoreAVFLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>

 {
    WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::EmptyCounter> m_player;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForResponseToAuthenticationChallenge:(id)arg1 ;
-(id)initWithPlayer:(*void)arg0 ;
-(void)resourceLoader:(id)arg0 didCancelLoadingRequest:(id)arg1 ;


@end


#endif