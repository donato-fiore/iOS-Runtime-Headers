// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRDEVICECOLLECTIONHISTORYENTRY_H
#define NRDEVICECOLLECTIONHISTORYENTRY_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "NRDeviceCollectionDiff.h"
#import "NRDeviceCollectionHistory.h"
#import "NRPBDeviceCollectionHistoryEntry.h"
#import "NRMutableDeviceCollection.h"

@interface NRDeviceCollectionHistoryEntry : NSObject <NSSecureCoding, NSCopying>

 {
    unsigned int _switchIndex;
    NSUInteger _index;
    NSDate *_date;
    NRDeviceCollectionDiff *_diff;
    NRDeviceCollectionHistory *_historyManager;
}


@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NRDeviceCollectionDiff *diff;
@property (readonly, nonatomic) NSUInteger index;
@property (readonly, nonatomic) NRPBDeviceCollectionHistoryEntry *protobuf;
@property (readonly, nonatomic) NRMutableDeviceCollection *state;
@property (readonly, nonatomic) unsigned int switchIndex;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHistory:(id)arg0 index:(NSUInteger)arg1 date:(id)arg2 diff:(id)arg3 switchIndex:(unsigned int)arg4 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif