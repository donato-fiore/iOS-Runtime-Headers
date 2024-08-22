// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDREPORT_H
#define HDREPORT_H

@class NSMutableArray, NSMutableDictionary, NSDictionary, NSDate, NSError, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HDReport : NSObject <NSSecureCoding, NSCopying>

 {
    NSMutableArray *_results;
    NSMutableDictionary *_files;
}


@property (copy, nonatomic) NSDictionary *auxiliaryData; // ivar: _auxiliaryData
@property (copy, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSDictionary *files;
@property (readonly, nonatomic) NSArray *results;
@property (copy, nonatomic) NSDate *startTime; // ivar: _startTime
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(BOOL)attemptToSetPassed;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addFile:(id)arg0 forName:(id)arg1 ;
-(void)addResult:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)failedForError:(id)arg0 ;


@end


#endif