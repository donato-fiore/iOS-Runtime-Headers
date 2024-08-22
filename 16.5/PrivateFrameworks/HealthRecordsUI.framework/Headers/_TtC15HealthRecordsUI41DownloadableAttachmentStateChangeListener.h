// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15HEALTHRECORDSUI41DOWNLOADABLEATTACHMENTSTATECHANGELISTENER_H
#define _TTC15HEALTHRECORDSUI41DOWNLOADABLEATTACHMENTSTATECHANGELISTENER_H

@protocol HKClinicalDocumentStoreStateChangeListener;

#import <Foundation/Foundation.h>


@interface _TtC15HealthRecordsUI41DownloadableAttachmentStateChangeListener : NSObject <HKClinicalDocumentStoreStateChangeListener>

 {
    ? _latestChange;
    ? handler;
}




-(id)init;
-(void)downloadableAttachmentDidChangeState:(id)arg0 ;


@end


#endif