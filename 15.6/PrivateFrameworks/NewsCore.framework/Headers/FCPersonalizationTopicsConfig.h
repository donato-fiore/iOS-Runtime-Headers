// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPERSONALIZATIONTOPICSCONFIG_H
#define FCPERSONALIZATIONTOPICSCONFIG_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FCPersonalizationTopicsConfig : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *topicsConfig; // ivar: _topicsConfig


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(id)initWithConfig:(id)arg0 defaultConfig:(id)arg1 ;
-(id)initWithTopicsConfig:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif