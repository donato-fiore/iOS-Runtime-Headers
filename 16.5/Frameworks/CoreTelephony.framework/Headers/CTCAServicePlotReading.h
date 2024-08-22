// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCASERVICEPLOTREADING_H
#define CTCASERVICEPLOTREADING_H

@class NSDate, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCAServicePlotReading : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSDate *at; // ivar: _at
@property (retain, nonatomic) NSArray *targets; // ivar: _targets


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif