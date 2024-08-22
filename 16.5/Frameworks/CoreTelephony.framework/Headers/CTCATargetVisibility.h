// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCATARGETVISIBILITY_H
#define CTCATARGETVISIBILITY_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCATargetVisibility : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger aggregateVisibility; // ivar: _aggregateVisibility


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif