// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDJOURNALCHAPTERITEM_H
#define HDJOURNALCHAPTERITEM_H

@class NSString, NSData;
@protocol HDJournalChapterEntry;

#import <Foundation/Foundation.h>


@interface HDJournalChapterItem : NSObject <HDJournalChapterEntry>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *entryClassName; // ivar: _entryClassName
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *serializedEntryData; // ivar: _serializedEntryData
@property (readonly, nonatomic) NSInteger size;
@property (readonly) Class superclass;


-(id)deserializedEntryWithError:(*id)arg0 ;
-(id)init;
-(id)initWithEntryClassName:(id)arg0 serializedEntryData:(id)arg1 ;


@end


#endif