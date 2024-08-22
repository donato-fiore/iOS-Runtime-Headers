// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTTEXTEDITGROUP_H
#define TTTEXTEDITGROUP_H

@class NSArray, NSDate, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TTTextEditGroup : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *edits; // ivar: _edits
@property (readonly, copy, nonatomic) NSDate *latestTimestamp; // ivar: _latestTimestamp
@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, copy, nonatomic) NSString *userID; // ivar: _userID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithEdits:(id)arg0 latestTimestamp:(id)arg1 userID:(id)arg2 range:(struct _NSRange )arg3 ;


@end


#endif