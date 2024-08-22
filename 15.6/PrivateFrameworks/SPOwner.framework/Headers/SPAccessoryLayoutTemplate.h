// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPACCESSORYLAYOUTTEMPLATE_H
#define SPACCESSORYLAYOUTTEMPLATE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPAccessoryLayoutTemplate : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) unsigned char partIdentifier; // ivar: _partIdentifier
@property (copy, nonatomic) NSString *partName; // ivar: _partName
@property (copy, nonatomic) NSString *partSymbol; // ivar: _partSymbol
@property (copy, nonatomic) NSString *partType; // ivar: _partType


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif