// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSDESTINATIONURI_H
#define IDSDESTINATIONURI_H



#import "IDSDestination.h"
#import "IDSURI.h"

@interface IDSDestinationURI : IDSDestination

@property (readonly, nonatomic) IDSURI *uri; // ivar: _uri


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)destinationLightweightStatus;
-(id)destinationURIs;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURI:(id)arg0 ;
-(id)initWithURIString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif