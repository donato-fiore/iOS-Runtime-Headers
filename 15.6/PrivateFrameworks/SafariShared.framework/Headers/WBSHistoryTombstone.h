// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHISTORYTOMBSTONE_H
#define WBSHISTORYTOMBSTONE_H

@class NSDictionary, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSHistoryTombstone : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) CGFloat endTime; // ivar: _endTime
@property (readonly, nonatomic) NSInteger generation; // ivar: _generation
@property (readonly, nonatomic, getter=isSecure) BOOL secure;
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic) NSData *urlHash; // ivar: _urlHash
@property (readonly, nonatomic) NSData *urlSalt; // ivar: _urlSalt
@property (readonly, nonatomic) NSString *urlString; // ivar: _urlString


+(BOOL)supportsSecureCoding;
-(BOOL)matchesVisitTime:(CGFloat)arg0 urlString:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSQLiteRow:(id)arg0 crypto:(id)arg1 ;
-(id)initWithStreamedTombstone:(struct _HistoryStreamedTombstone *)arg0 ;
-(id)initWithURLString:(id)arg0 urlHash:(id)arg1 urlSalt:(id)arg2 startTime:(CGFloat)arg3 endTime:(CGFloat)arg4 generation:(NSInteger)arg5 ;
-(id)secureTombstoneWithSalt:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif