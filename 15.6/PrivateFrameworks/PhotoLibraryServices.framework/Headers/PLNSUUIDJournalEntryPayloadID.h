// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLNSUUIDJOURNALENTRYPAYLOADID_H
#define PLNSUUIDJOURNALENTRYPAYLOADID_H

@class NSUUID, NSString;
@protocol PLJournalEntryPayloadID;

#import <Foundation/Foundation.h>


@interface PLNSUUIDJournalEntryPayloadID : NSObject <PLJournalEntryPayloadID>

 {
    NSUUID *_payloadID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithUUIDBytes:(unsigned char)arg0 ;
-(id)initWithUUIDString:(id)arg0 ;
-(id)payloadIDString;
-(id)payloadUUIDData;


@end


#endif