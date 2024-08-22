// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYBACKLINKFILTERCACHE_H
#define SYBACKLINKFILTERCACHE_H

@class NSArray, NSData, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SYBacklinkFilterCache : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *activityTypes; // ivar: _activityTypes
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSMutableArray *entries; // ivar: _entries


+(BOOL)supportsSecureCoding;
-(BOOL)containsMatchingEntriesForItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithActivityTypes:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addEntriesForItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalize;


@end


#endif