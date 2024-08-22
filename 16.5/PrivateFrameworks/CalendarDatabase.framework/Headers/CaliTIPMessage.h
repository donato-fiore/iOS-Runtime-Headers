// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALITIPMESSAGE_H
#define CALITIPMESSAGE_H

@class NSArray, ICSCalendar, NSData, ICSDocument, ICSEvent, NSString, CalDAVScheduleChangesProperty;

#import <Foundation/Foundation.h>


@interface CaliTIPMessage : NSObject

@property (readonly, nonatomic) NSArray *allOccurrences;
@property (readonly, nonatomic) ICSCalendar *calendar;
@property (copy, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) ICSDocument *document; // ivar: _document
@property (retain, nonatomic) ICSEvent *event; // ivar: _event
@property (copy, nonatomic) NSString *filename; // ivar: _filename
@property BOOL iMIPImported; // ivar: _iMIPImported
@property (readonly, nonatomic) ICSEvent *masterEvent;
@property (readonly, nonatomic) NSArray *occurrences;
@property (retain, nonatomic) CalDAVScheduleChangesProperty *scheduleChanges; // ivar: _scheduleChanges


-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithData:(id)arg0 filename:(id)arg1 ;
-(id)initWithData:(id)arg0 filename:(id)arg1 scheduleChanges:(id)arg2 ;


@end


#endif