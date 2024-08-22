// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNOTEDATEFORMATTERCONTROLLER_H
#define ICNOTEDATEFORMATTERCONTROLLER_H

@class NSDate, NSDateFormatter, ICNote;
@protocol ICNoteDateFormatterControllerDelegate;

#import <Foundation/Foundation.h>


@interface ICNoteDateFormatterController : NSObject

@property (nonatomic) NSInteger currentSortType; // ivar: _currentSortType
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (weak, nonatomic) NSObject<ICNoteDateFormatterControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didManuallyChangeDateType; // ivar: _didManuallyChangeDateType
@property (nonatomic) BOOL iconHidden; // ivar: _iconHidden
@property (weak, nonatomic) ICNote *note; // ivar: _note
@property (retain, nonatomic) NSDateFormatter *shortDateFormatter; // ivar: _shortDateFormatter
@property (readonly, nonatomic) BOOL shouldShowDateModified;
@property (nonatomic) BOOL shouldShowSharedNoteTitle; // ivar: _shouldShowSharedNoteTitle
@property (nonatomic) BOOL showAlternateDateView; // ivar: _showAlternateDateView


-(id)dateStringForDate:(id)arg0 dateFormatter:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)noteDecryptedStatusDidChange:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setUp;
-(void)sortTypeDidChange:(id)arg0 ;
-(void)timeFormatChanged:(id)arg0 ;
-(void)toggleVisibleDateType;


@end


#endif