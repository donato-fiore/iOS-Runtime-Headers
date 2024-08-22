// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFIMAPOPERATION_H
#define MFIMAPOPERATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MFIMAPOperation : NSObject {
    BOOL _type;
    BOOL _failureCount;
    BOOL _temporaryUids;
    NSString *_mailboxName;
    NSArray""falseFlags"@"NSArray""uids"^{__CFArray}}"append"{?="uid"I"flags"@"NSArray""internalDate"i"size"I}"copy"{?="srcUids"^{__CFArray}"dstUids"^{__CFArray}"destinationMailbox"@"NSString"} _opSpecific;
}




+(id)deserializedCopyFromData:(id)arg0 cursor:(*NSUInteger)arg1 ;
-(BOOL)actsOnTemporaryUid:(unsigned int)arg0 ;
-(BOOL)getMessageId:(*id)arg0 andInternalDate:(*id)arg1 forDestinationUid:(unsigned int)arg2 ;
-(BOOL)isSourceOfTemporaryUid:(unsigned int)arg0 ;
-(BOOL)isValid;
-(BOOL)usesRealUids;
-(id)_deserializeOpSpecificValuesFromData:(id)arg0 cursor:(*NSUInteger)arg1 ;
-(id)description;
-(id)destinationMailbox;
-(id)destinationUids;
-(id)flags;
-(id)flagsToClear;
-(id)flagsToSet;
-(id)initWithAppendedUid:(unsigned int)arg0 approximateSize:(unsigned int)arg1 flags:(id)arg2 internalDate:(id)arg3 mailbox:(id)arg4 ;
-(id)initWithFlagsToSet:(id)arg0 flagsToClear:(id)arg1 forUIDs:(id)arg2 inMailbox:(id)arg3 ;
-(id)initWithMailboxToCreate:(id)arg0 ;
-(id)initWithMailboxToDelete:(id)arg0 ;
-(id)initWithType:(int)arg0 mailbox:(id)arg1 ;
-(id)initWithUidsToCopy:(id)arg0 fromMailbox:(id)arg1 toMailbox:(id)arg2 firstNewUid:(unsigned int)arg3 ;
-(id)internalDate;
-(id)mailboxName;
-(id)sourceUids;
-(id)uids;
-(int)operationType;
-(unsigned char)_magic;
-(unsigned int)approximateSize;
-(unsigned int)failureCount;
-(unsigned int)firstTemporaryUid;
-(unsigned int)lastTemporaryUid;
-(unsigned int)sourceUidForTemporaryUid:(unsigned int)arg0 ;
-(unsigned int)uid;
-(void)dealloc;
-(void)expungeTemporaryUid:(unsigned int)arg0 ;
-(void)serializeIntoData:(id)arg0 ;
-(void)setFailureCount:(unsigned int)arg0 ;
-(void)setMessageId:(id)arg0 andInternalDate:(id)arg1 forMessageWithSourceUid:(unsigned int)arg2 ;
-(void)setUsesRealUids:(BOOL)arg0 ;


@end


#endif