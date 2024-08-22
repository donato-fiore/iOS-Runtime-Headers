// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMNOTEFILTER_H
#define EDAMNOTEFILTER_H

@class NSNumber, NSString, NSArray;


#import "FATObject.h"

@interface EDAMNoteFilter : FATObject

@property (retain, nonatomic) NSNumber *ascending; // ivar: _ascending
@property (retain, nonatomic) NSString *context; // ivar: _context
@property (retain, nonatomic) NSString *emphasized; // ivar: _emphasized
@property (retain, nonatomic) NSNumber *inactive; // ivar: _inactive
@property (retain, nonatomic) NSNumber *includeAllReadableNotebooks; // ivar: _includeAllReadableNotebooks
@property (retain, nonatomic) NSString *notebookGuid; // ivar: _notebookGuid
@property (retain, nonatomic) NSNumber *order; // ivar: _order
@property (retain, nonatomic) NSArray *tagGuids; // ivar: _tagGuids
@property (retain, nonatomic) NSString *timeZone; // ivar: _timeZone
@property (retain, nonatomic) NSString *words; // ivar: _words


+(id)structFields;
+(id)structName;


@end


#endif