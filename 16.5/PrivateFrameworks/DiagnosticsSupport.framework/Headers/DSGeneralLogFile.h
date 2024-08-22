// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSGENERALLOGFILE_H
#define DSGENERALLOGFILE_H

@class NSString, NSDate, NSURL;

#import <Foundation/Foundation.h>


@interface DSGeneralLogFile : NSObject

@property (readonly, nonatomic) NSString *currentOSVersion; // ivar: _currentOSVersion
@property (readonly, nonatomic) NSString *hardwareModel; // ivar: _hardwareModel
@property (readonly, nonatomic) NSDate *logStartDate; // ivar: _logStartDate
@property (readonly, nonatomic) int logVersion; // ivar: _logVersion
@property (readonly, nonatomic) NSDate *restoreDate; // ivar: _restoreDate
@property (readonly, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, nonatomic) NSDate *updateDate; // ivar: _updateDate
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)enumerateLogLinesWithIDs:(id)arg0 usingBlock:(id)arg1 ;
-(BOOL)parseDetailsWithURL:(id)arg0 ;
-(BOOL)parseHeadersWithLine:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif