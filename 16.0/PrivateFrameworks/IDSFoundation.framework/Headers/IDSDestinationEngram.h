// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSDESTINATIONENGRAM_H
#define IDSDESTINATIONENGRAM_H

@class ENGroup;


#import "IDSDestination.h"

@interface IDSDestinationEngram : IDSDestination

@property (readonly, retain, nonatomic) ENGroup *underlyingGroup; // ivar: _underlyingGroup


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)destinationURIs;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithENGroup:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif