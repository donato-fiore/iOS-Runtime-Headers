// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DUIDIRTYITEM_H
#define _DUIDIRTYITEM_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DUIDirtyItem : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger index; // ivar: _index


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif