// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXLOCATIONMANAGERKNOWNLOIS_H
#define ATXLOCATIONMANAGERKNOWNLOIS_H

@class CLLocation;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXLocationManagerKnownLOIs : NSObject <NSSecureCoding>

 {
    CLLocation *Home;
    CLLocation *Work;
    CLLocation *School;
    CLLocation *Gym;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif