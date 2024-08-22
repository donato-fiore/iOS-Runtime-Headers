// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPLINKMETADATAOBSERVER_H
#define LPLINKMETADATAOBSERVER_H


#import <Foundation/Foundation.h>

#import "LPLinkMetadata.h"

@interface LPLinkMetadataObserver : NSObject {
    LPLinkMetadata *_metadata;
    id *_callback;
    BOOL _hasScheduledCallback;
}




-(id)initWithMetadata:(id)arg0 callback:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)stopObserving;


@end


#endif