// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDSETCHARACTERISTICJOURNALENTRY_H
#define _HDSETCHARACTERISTICJOURNALENTRY_H

@class HKCharacteristicType;


#import "HDJournalEntry.h"

@interface _HDSetCharacteristicJournalEntry : HDJournalEntry

@property (readonly, nonatomic) HKCharacteristicType *dataType; // ivar: _dataType
@property (readonly, nonatomic) id *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif