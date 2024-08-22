// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFWEBCLIPMETADATAFETCHER_H
#define _SFWEBCLIPMETADATAFETCHER_H

@class NSDictionary, NSArray, NSMutableArray;

#import <Foundation/Foundation.h>

#import "_SFInjectedJavaScriptController.h"

@interface _SFWebClipMetadataFetcher : NSObject {
    NSDictionary *_metaTags;
    NSArray *_linkTags;
    NSMutableArray *_metadataConsumers;
    BOOL _fetchingCompleted;
    _SFInjectedJavaScriptController *_jsController;
}




+(id)_webClipLinkTagWithDictionary:(id)arg0 ;
+(id)metadataFetcherScriptSource;
+(void)parseRawMetadataDictionary:(id)arg0 consumer:(id)arg1 ;
-(id)initWithInjectedJavascriptController:(id)arg0 ;
-(void)_startFetchingMetadata;
-(void)fetchMetadataWithConsumer:(id)arg0 ;


@end


#endif