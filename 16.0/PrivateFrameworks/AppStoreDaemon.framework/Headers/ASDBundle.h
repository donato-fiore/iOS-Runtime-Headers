// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDBUNDLE_H
#define ASDBUNDLE_H

@class NSURL, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ASDBundle : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
+(id)bundleWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif