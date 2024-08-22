// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVPSECUREKEYLOADER_H
#define TVPSECUREKEYLOADER_H

@protocol TVPSecureKeyLoaderDelegate;

#import <Foundation/Foundation.h>

#import "TVPPlaybackReportingEventCollection.h"

@interface TVPSecureKeyLoader : NSObject

@property (weak, nonatomic) NSObject<TVPSecureKeyLoaderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection; // ivar: _eventCollection


-(void)sendStopRequest;
-(void)startLoadingCertificateDataForRequest:(id)arg0 ;
-(void)startLoadingContentIdentifierDataForRequest:(id)arg0 ;
-(void)startLoadingKeyResponseDataForRequest:(id)arg0 ;


@end


#endif