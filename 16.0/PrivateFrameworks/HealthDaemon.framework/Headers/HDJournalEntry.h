// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDJOURNALENTRY_H
#define HDJOURNALENTRY_H

@class NSString;
@protocol HDJournalChapterEntry, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDJournalEntry : NSObject <HDJournalChapterEntry, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *entryClassName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger size;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)deserializedEntryWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif