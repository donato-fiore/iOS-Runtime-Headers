// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUUUIDPATH_H
#define TSUUUIDPATH_H

@class NSString, NSUUID, NSArray;
@protocol NSCopying, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface TSUUUIDPath : NSObject <NSCopying, NSFastEnumeration>



@property (readonly, nonatomic) NSString *UUIDPathString;
@property (readonly, nonatomic) NSUUID *lastUUID;
@property (readonly, nonatomic) NSArray *uuids; // ivar: _uuids


+(id)lastUUIDFromUUIDPathString:(id)arg0 ;
+(id)tokenizeUUIDPathString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)UUIDPathByAppendingUUID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArray:(id)arg0 ;
-(id)initWithUUIDPathString:(id)arg0 ;


@end


#endif