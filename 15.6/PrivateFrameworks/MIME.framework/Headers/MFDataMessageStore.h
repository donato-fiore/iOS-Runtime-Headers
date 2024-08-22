// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFDATAMESSAGESTORE_H
#define MFDATAMESSAGESTORE_H

@class NSData, NSString;


#import "MFMessageStore.h"

@interface MFDataMessageStore : MFMessageStore {
    NSData *_data;
    Class _messageClass;
    NSString *_storagePath;
}


@property (retain, nonatomic) id *mailboxUid; // ivar: _mailboxUid


-(BOOL)bodyFetchRequiresNetworkActivity;
-(BOOL)messageCanBeTriaged:(id)arg0 ;
-(id)_cachedBodyDataForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)_cachedBodyForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)_cachedHeadersForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)account;
-(id)bodyDataForMessage:(id)arg0 isComplete:(*BOOL)arg1 isPartial:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)headerDataForMessage:(id)arg0 downloadIfNecessary:(BOOL)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)message;
-(id)storagePath;
-(id)storeData:(id)arg0 forMimePart:(id)arg1 isComplete:(BOOL)arg2 ;
-(id)storePath;
-(void)setMessageClass:(Class)arg0 ;
-(void)setStoragePath:(id)arg0 ;


@end


#endif