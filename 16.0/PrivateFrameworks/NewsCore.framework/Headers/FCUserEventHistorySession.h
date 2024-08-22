// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCUSEREVENTHISTORYSESSION_H
#define FCUSEREVENTHISTORYSESSION_H

@class NSData, NSDate, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface FCUserEventHistorySession : NSObject

@property (readonly, nonatomic) NSData *data;
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSInteger size;
@property (retain, nonatomic) NSNumber *sizeNumber; // ivar: _sizeNumber


+(id)dateFromSessionID:(id)arg0 ;
-(id)compressedData;
-(id)description;
-(id)initWithSessionID:(id)arg0 path:(id)arg1 ;


@end


#endif