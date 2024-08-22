// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTTEXTEDIT_H
#define TTTEXTEDIT_H

@class NSUUID, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TTTextEdit : NSObject <NSCopying>



@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, copy, nonatomic) NSUUID *replicaID; // ivar: _replicaID
@property (readonly, copy, nonatomic) NSDate *timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAttributes:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)initWithTimestamp:(id)arg0 replicaID:(id)arg1 range:(struct _NSRange )arg2 ;
-(id)localizedDescriptionForNote:(id)arg0 ;


@end


#endif