// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSHISTORYSERVICETOMBSTONE_H
#define WBSHISTORYSERVICETOMBSTONE_H

@class NSString, NSData;


#import "WBSHistoryServiceObject.h"

@interface WBSHistoryServiceTombstone : WBSHistoryServiceObject

@property (readonly, nonatomic) CGFloat endTime; // ivar: _endTime
@property (readonly, nonatomic) NSInteger generation; // ivar: _generation
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic) NSString *url; // ivar: _url
@property (readonly, nonatomic) NSData *urlHash; // ivar: _urlHash
@property (readonly, nonatomic) NSData *urlSalt; // ivar: _urlSalt


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDatabaseID:(NSInteger)arg0 url:(id)arg1 urlHash:(id)arg2 urlSalt:(id)arg3 startTime:(CGFloat)arg4 endTime:(CGFloat)arg5 generation:(NSInteger)arg6 ;
-(id)initWithTombstone:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif