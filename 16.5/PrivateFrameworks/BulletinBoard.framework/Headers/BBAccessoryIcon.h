// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBACCESSORYICON_H
#define BBACCESSORYICON_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BBAccessoryIcon : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDictionary *imagesForContentSize; // ivar: _imagesForContentSize


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageForContentSizeCategory:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addImage:(id)arg0 forContentSizeCategory:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif