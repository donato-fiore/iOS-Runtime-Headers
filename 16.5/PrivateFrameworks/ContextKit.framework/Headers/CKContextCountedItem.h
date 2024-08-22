// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTEXTCOUNTEDITEM_H
#define CKCONTEXTCOUNTEDITEM_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKContextCountedItem : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger count; // ivar: _count
@property (retain, nonatomic) id *item; // ivar: _item


+(BOOL)supportsSecureCoding;
+(id)item:(id)arg0 withCount:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif