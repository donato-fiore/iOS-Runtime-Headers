// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLNSSTRINGJOURNALENTRYPAYLOADID_H
#define PLNSSTRINGJOURNALENTRYPAYLOADID_H

@class NSString;
@protocol PLJournalEntryPayloadID;

#import <Foundation/Foundation.h>


@interface PLNSStringJournalEntryPayloadID : NSObject <PLJournalEntryPayloadID>

 {
    NSString *_payloadID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)payloadIDString;
-(id)payloadUUIDData;


@end


#endif