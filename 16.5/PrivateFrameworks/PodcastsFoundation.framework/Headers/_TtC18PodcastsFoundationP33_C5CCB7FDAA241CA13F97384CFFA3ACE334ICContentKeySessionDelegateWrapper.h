// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18PODCASTSFOUNDATIONP33_C5CCB7FDAA241CA13F97384CFFA3ACE334ICCONTENTKEYSESSIONDELEGATEWRAPPER_H
#define _TTC18PODCASTSFOUNDATIONP33_C5CCB7FDAA241CA13F97384CFFA3ACE334ICCONTENTKEYSESSIONDELEGATEWRAPPER_H

@protocol ICContentKeySessionDelegateProtocol;

#import <Foundation/Foundation.h>


@interface _TtC18PodcastsFoundationP33_C5CCB7FDAA241CA13F97384CFFA3ACE334ICContentKeySessionDelegateWrapper : NSObject <ICContentKeySessionDelegateProtocol>

 {
    ? delegate;
}




-(id)init;
-(void)contentKeySession:(id)arg0 didFinishProcessingKey:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;


@end


#endif