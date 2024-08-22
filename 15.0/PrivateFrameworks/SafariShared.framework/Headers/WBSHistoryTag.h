// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYTAG_H
#define WBSHISTORYTAG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSHistoryTag : NSObject

@property (readonly, nonatomic) NSInteger databaseID; // ivar: _databaseID
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger level; // ivar: _level
@property (readonly, nonatomic) CGFloat modificationTimestamp; // ivar: _modificationTimestamp
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithTitle:(id)arg0 identifier:(id)arg1 databaseID:(NSInteger)arg2 modificationTimestamp:(CGFloat)arg3 level:(NSInteger)arg4 ;


@end


#endif