// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMLOGITEM_H
#define RMLOGITEM_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RMLogItem : NSObject <NSSecureCoding, NSCopying>

 {
    id *_internalLogItem;
}


@property (readonly, nonatomic) CGFloat timestamp;


+(BOOL)supportsSecureCoding;
-(id)_initWithTimestamp:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif