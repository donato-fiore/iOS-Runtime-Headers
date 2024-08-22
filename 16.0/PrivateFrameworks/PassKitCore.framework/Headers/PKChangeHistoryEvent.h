// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCHANGEHISTORYEVENT_H
#define PKCHANGEHISTORYEVENT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface PKChangeHistoryEvent : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger recordType; // ivar: _recordType
@property (retain, nonatomic) NSString *recordUniqueID; // ivar: _recordUniqueID
@property (readonly, nonatomic) BOOL representsCatalogUpdate;
@property (readonly, nonatomic) BOOL representsPassAddition;
@property (readonly, nonatomic) BOOL representsPassRemoval;
@property (readonly, nonatomic) BOOL representsPassUpdate;
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithType:(NSInteger)arg0 recordType:(NSInteger)arg1 recordUniqueID:(id)arg2 ;


@end


#endif