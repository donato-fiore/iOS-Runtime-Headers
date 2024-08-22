// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVMEDIASOCIALPOSTITEM_H
#define SSVMEDIASOCIALPOSTITEM_H

@class NSString;
@protocol NSCopying, SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSVMediaSocialPostItem : NSObject <NSCopying, SSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif