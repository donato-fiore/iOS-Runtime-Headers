// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKCLIPSERVICES_H
#define MKCLIPSERVICES_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MKClipServices : NSObject {
    NSObject<OS_dispatch_queue> *_removeNonAvailableAppClipLinksQueue;
    NSObject<OS_dispatch_queue> *_requestAppClipMetadataQueue;
}




+(id)sharedInstance;
-(id)init;
-(void)appClipWithQuickLink:(id)arg0 completion:(id)arg1 ;
-(void)quickLinksCopyByRemovingNonAvailableAppClipLinks:(id)arg0 completion:(id)arg1 ;
-(void)requestAppClip:(id)arg0 completion:(id)arg1 ;


@end


#endif