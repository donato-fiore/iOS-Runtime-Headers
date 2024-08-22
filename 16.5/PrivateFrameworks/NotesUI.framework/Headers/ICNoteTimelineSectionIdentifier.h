// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTETIMELINESECTIONIDENTIFIER_H
#define ICNOTETIMELINESECTIONIDENTIFIER_H

@class NSDate, NSString;


#import "ICNoteSectionIdentifier.h"

@interface ICNoteTimelineSectionIdentifier : ICNoteSectionIdentifier

@property (copy, nonatomic) NSDate *referenceDate; // ivar: _referenceDate
@property (copy, nonatomic) NSString *sectionTitle; // ivar: _sectionTitle
@property (nonatomic) NSUInteger sortOrder; // ivar: _sortOrder
@property (nonatomic) NSInteger timelineSectionType; // ivar: _timelineSectionType


+(id)sortDescriptorsWithDirection:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToICNoteTimelineSectionIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTimelineSectionType:(NSInteger)arg0 referenceDate:(id)arg1 title:(id)arg2 sortOrder:(NSUInteger)arg3 ;
-(id)title;
-(id)typeString;


@end


#endif