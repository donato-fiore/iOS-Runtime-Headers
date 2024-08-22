// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBDATEFORMATTERTOKEN_H
#define DBDATEFORMATTERTOKEN_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DBDateFormatterToken : NSObject <NSCopying>



@property (nonatomic) NSUInteger dateStyle; // ivar: _dateStyle
@property (copy, nonatomic) NSString *formatString; // ivar: _formatString
@property (nonatomic) NSUInteger timeStyle; // ivar: _timeStyle


+(id)tokenWithDateStyle:(NSUInteger)arg0 timeStyle:(NSUInteger)arg1 ;
+(id)tokenWithFormatString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif