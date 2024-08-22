// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPEVENTQUERY_H
#define PPEVENTQUERY_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPEventQuery : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *fromDate; // ivar: _fromDate
@property (retain, nonatomic) NSDate *toDate; // ivar: _toDate


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif