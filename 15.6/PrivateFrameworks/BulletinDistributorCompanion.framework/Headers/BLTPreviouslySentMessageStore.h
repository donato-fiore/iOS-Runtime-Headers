// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTPREVIOUSLYSENTMESSAGESTORE_H
#define BLTPREVIOUSLYSENTMESSAGESTORE_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface BLTPreviouslySentMessageStore : NSObject {
    NSMutableDictionary *_messageDigests;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_saveTimer;
    NSString *_path;
}


@property (nonatomic) BOOL dirty; // ivar: _dirty


-(BOOL)isEmpty;
-(id)initWithMessageStorePath:(id)arg0 ;
-(id)messageDigestForUnsentMessage:(id)arg0 messageKey:(id)arg1 ;
-(void)_cancelSave;
-(void)_enqueueSave;
-(void)_save;
-(void)clear;
-(void)dealloc;
-(void)invalidate;
-(void)recordMessageDigestAsPreviouslySent:(id)arg0 messageKey:(id)arg1 ;
-(void)removeDigestForKey:(id)arg0 ;


@end


#endif