// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSDESTINATIONCOMPOSITE_H
#define IDSDESTINATIONCOMPOSITE_H

@class NSArray;


#import "IDSDestination.h"

@interface IDSDestinationComposite : IDSDestination

@property (readonly, nonatomic) NSArray *destinations; // ivar: _destinations


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)destinationLightweightStatus;
-(id)destinationURIs;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestinations:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif