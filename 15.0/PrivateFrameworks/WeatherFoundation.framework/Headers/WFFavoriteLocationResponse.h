// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFFAVORITELOCATIONRESPONSE_H
#define WFFAVORITELOCATIONRESPONSE_H

@class NSArray;


#import "WFResponse.h"

@interface WFFavoriteLocationResponse : WFResponse

@property (readonly, nonatomic) NSArray *favoriteLocations; // ivar: _favoriteLocations


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 favorites:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif