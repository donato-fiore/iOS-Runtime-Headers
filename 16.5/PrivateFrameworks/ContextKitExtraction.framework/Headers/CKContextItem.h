// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTEXTITEM_H
#define CKCONTEXTITEM_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKContextItem : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *topicId; // ivar: _topicId


+(BOOL)supportsSecureCoding;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif