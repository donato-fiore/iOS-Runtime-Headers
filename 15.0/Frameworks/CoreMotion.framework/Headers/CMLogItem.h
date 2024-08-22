// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMLOGITEM_H
#define CMLOGITEM_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMLogItem : NSObject <NSSecureCoding, NSCopying>

 {
    id *_internalLogItem;
}


@property (readonly, nonatomic) CGFloat timestamp;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif