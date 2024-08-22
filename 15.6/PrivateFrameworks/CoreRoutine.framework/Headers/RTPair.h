// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTPAIR_H
#define RTPAIR_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTPair : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) id *firstObject; // ivar: _firstObject
@property (readonly, nonatomic) id *secondObject; // ivar: _secondObject


+(BOOL)supportsSecureCoding;
+(Class)getClusterClassOfObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFirstObject:(id)arg0 secondObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif