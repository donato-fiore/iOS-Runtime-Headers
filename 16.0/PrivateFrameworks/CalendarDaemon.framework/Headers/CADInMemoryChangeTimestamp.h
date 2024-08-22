// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADINMEMORYCHANGETIMESTAMP_H
#define CADINMEMORYCHANGETIMESTAMP_H

@class CalSingleDatabaseInMemoryChangeTimestamp, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CADInMemoryChangeTimestamp : NSObject <NSSecureCoding, NSCopying>

 {
    CalSingleDatabaseInMemoryChangeTimestamp *_universalTimestamp;
    NSDictionary *_timestamps;
}




+(BOOL)supportsSecureCoding;
+(id)timestampForNow;
-(id)allDatabases;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamps:(id)arg0 ;
-(id)redactedDescription;
-(id)timestampForDatabase:(int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif