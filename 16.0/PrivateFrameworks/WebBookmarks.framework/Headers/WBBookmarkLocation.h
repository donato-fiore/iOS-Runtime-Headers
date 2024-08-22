// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBBOOKMARKLOCATION_H
#define WBBOOKMARKLOCATION_H

@class WBSCRDTPosition;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBBookmarkLocation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) int parentID; // ivar: _parentID
@property (readonly, copy, nonatomic) WBSCRDTPosition *position; // ivar: _position


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParentID:(int)arg0 position:(id)arg1 ;
-(id)locationWithParentID:(int)arg0 ;
-(id)locationWithPosition:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif