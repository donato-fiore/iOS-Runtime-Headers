// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDEVENTINDEXERBOOKMARK_H
#define _CDEVENTINDEXERBOOKMARK_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CDEventIndexerBookmark : NSObject <NSSecureCoding>

 {
    NSDate *_earliestCreationDate;
    NSDate *_latestCreationDate;
    NSDate *_latestTombstoneDate;
    NSInteger _version;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif