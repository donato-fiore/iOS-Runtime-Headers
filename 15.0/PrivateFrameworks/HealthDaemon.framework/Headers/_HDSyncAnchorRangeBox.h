// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDSYNCANCHORRANGEBOX_H
#define _HDSYNCANCHORRANGEBOX_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _HDSyncAnchorRangeBox : NSObject <NSSecureCoding, NSCopying>

 {
    HDSyncAnchorRange _anchorRange;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif