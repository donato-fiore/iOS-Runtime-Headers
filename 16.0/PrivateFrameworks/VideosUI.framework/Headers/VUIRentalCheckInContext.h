// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIRENTALCHECKINCONTEXT_H
#define VUIRENTALCHECKINCONTEXT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface VUIRentalCheckInContext : NSObject

@property (readonly, nonatomic) NSNumber *dsid; // ivar: _dsid
@property (readonly, nonatomic) NSNumber *rentalID; // ivar: _rentalID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithRentalID:(id)arg0 dsid:(id)arg1 ;


@end


#endif