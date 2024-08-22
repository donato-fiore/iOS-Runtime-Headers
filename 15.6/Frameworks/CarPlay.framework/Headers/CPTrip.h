// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPTRIP_H
#define CPTRIP_H

@class MKMapItem, NSUUID, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPTrip : NSObject <NSSecureCoding>



@property (readonly, nonatomic) MKMapItem *destination; // ivar: _destination
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) MKMapItem *origin; // ivar: _origin
@property (readonly, copy, nonatomic) NSArray *routeChoices; // ivar: _routeChoices
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOrigin:(id)arg0 destination:(id)arg1 routeChoices:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif