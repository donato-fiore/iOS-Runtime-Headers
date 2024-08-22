// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTPRIVERSION_H
#define CTPRIVERSION_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTPriVersion : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *majorVersion; // ivar: _majorVersion
@property (retain, nonatomic) NSNumber *minorVersion; // ivar: _minorVersion
@property (retain, nonatomic) NSNumber *releaseVersion; // ivar: _releaseVersion


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif