// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCASERVICEPLOT_H
#define CTCASERVICEPLOT_H

@class NSDate, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCAServicePlot : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSDate *endsAt; // ivar: _endsAt
@property (retain, nonatomic) NSArray *readings; // ivar: _readings
@property (retain, nonatomic) NSDate *startsAt; // ivar: _startsAt


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif