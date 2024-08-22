// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDGATHERLOGSREQUESTOPTIONS_H
#define ASDGATHERLOGSREQUESTOPTIONS_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ASDGatherLogsRequestOptions : NSObject <NSCopying>



@property (copy, nonatomic) NSString *fileName; // ivar: _fileName
@property (copy, nonatomic) NSArray *urlFilters; // ivar: _urlFilters
@property (nonatomic) BOOL verbose; // ivar: _verbose


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif