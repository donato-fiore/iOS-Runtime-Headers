// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSCLUSTERSARCHIVE_H
#define _PSCLUSTERSARCHIVE_H

@class NSDate, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSClustersArchive : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDate *archiveDate; // ivar: _archiveDate
@property (readonly, nonatomic) NSDictionary *clustersDictionary; // ivar: _clustersDictionary


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithClustersDictionary:(id)arg0 archiveDate:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif