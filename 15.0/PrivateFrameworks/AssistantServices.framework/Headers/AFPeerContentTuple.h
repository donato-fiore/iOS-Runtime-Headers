// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFPEERCONTENTTUPLE_H
#define AFPEERCONTENTTUPLE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AFPeerInfo.h"

@interface AFPeerContentTuple : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) id *content; // ivar: _content
@property (readonly, copy, nonatomic) AFPeerInfo *info; // ivar: _info


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInfo:(id)arg0 content:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif