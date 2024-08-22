// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCSOLTAGID_H
#define FCSOLTAGID_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FCSolTagID : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _isFavorited;
    BOOL _isAutoFavorited;
    BOOL _isGroupable;
    NSString *_identifier;
    NSUInteger _whitelistLevel;
    CGFloat _specificity;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif