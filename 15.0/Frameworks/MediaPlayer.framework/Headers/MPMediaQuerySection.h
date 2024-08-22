// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIAQUERYSECTION_H
#define MPMEDIAQUERYSECTION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MPMediaQuerySection : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) _NSRange range; // ivar: _range
@property (nonatomic) NSUInteger sectionIndexTitleIndex; // ivar: _sectionIndexTitleIndex
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif