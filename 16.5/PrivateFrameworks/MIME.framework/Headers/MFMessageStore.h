// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMESSAGESTORE_H
#define MFMESSAGESTORE_H

@class NSMutableSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MFMessageStoreObjectCache.h"

@interface MFMessageStore : NSObject <NSCopying>

 {
    NSMutableSet *_uniqueStrings;
}


@property (readonly, retain, nonatomic) MFMessageStoreObjectCache *objectCache; // ivar: _objectCache


+(Class)classForMimePart;
+(Class)headersClass;
+(id)log;
+(void)setDefaultMessageHeadersClass:(Class)arg0 ;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(BOOL)dataForMimePart:(id)arg0 inRange:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 withConsumer:(id)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(*BOOL)arg5 ;
-(BOOL)dataForMimePart:(id)arg0 inRange:(struct _NSRange )arg1 withConsumer:(id)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(BOOL)downloadMimePartNumber:(id)arg0 message:(id)arg1 withProgressBlock:(id)arg2 ;
-(BOOL)hasCompleteDataForMimePart:(id)arg0 ;
-(BOOL)messageCanBeTriaged:(id)arg0 ;
-(BOOL)wantsLineEndingConversionForMIMEPart:(id)arg0 ;
-(id)_bodyForMessage:(id)arg0 fetchIfNotAvailable:(BOOL)arg1 updateFlags:(BOOL)arg2 ;
-(id)_cachedBodyDataContainerForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)_cachedBodyDataForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)_cachedBodyForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)_cachedHeaderDataForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)_cachedHeadersForMessage:(id)arg0 valueIfNotPresent:(id)arg1 ;
-(id)_downloadHeadersForMessages:(id)arg0 ;
-(id)_fetchBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 downloadIfNecessary:(BOOL)arg2 partial:(*BOOL)arg3 ;
-(id)_setOrGetBody:(id)arg0 forMessage:(id)arg1 updateFlags:(BOOL)arg2 ;
-(id)bestAlternativeForPart:(id)arg0 ;
-(id)bodyDataForMessage:(id)arg0 isComplete:(*BOOL)arg1 isPartial:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)bodyForMessage:(id)arg0 fetchIfNotAvailable:(BOOL)arg1 updateFlags:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataForMimePart:(id)arg0 inRange:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 didDownload:(*BOOL)arg4 ;
-(id)decryptedTopLevelPartForPart:(id)arg0 ;
-(id)defaultAlternativeForPart:(id)arg0 ;
-(id)fullBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 didDownload:(*BOOL)arg4 ;
-(id)headerDataForMessage:(id)arg0 downloadIfNecessary:(BOOL)arg1 ;
-(id)headersForMessage:(id)arg0 fetchIfNotAvailable:(BOOL)arg1 ;
-(id)init;
-(id)newObjectCache;
-(id)uniquedString:(id)arg0 ;
-(void)_flushAllCaches;
-(void)_flushAllMessageData;
-(void)flushCacheForMessage:(id)arg0 ;
-(void)setMessageClass:(Class)arg0 ;
-(void)setNumberOfAttachments:(unsigned int)arg0 isSigned:(BOOL)arg1 isEncrypted:(BOOL)arg2 forMessage:(id)arg3 ;


@end


#endif