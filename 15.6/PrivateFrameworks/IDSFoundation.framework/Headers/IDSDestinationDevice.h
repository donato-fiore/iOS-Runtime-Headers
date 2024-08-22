// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSDESTINATIONDEVICE_H
#define IDSDESTINATIONDEVICE_H



#import "IDSDestination.h"
#import "IDSURI.h"

@interface IDSDestinationDevice : IDSDestination

@property (retain, nonatomic) IDSURI *destinationURI; // ivar: _destinationURI
@property (nonatomic) BOOL isGuest; // ivar: _isGuest


+(BOOL)isDeviceURI:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isDevice;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceURI:(id)arg0 ;
-(id)initWithIDSDeviceURI:(id)arg0 ;
-(id)initWithRapportPublicIdentifierURI:(id)arg0 ;
-(id)initWithURI:(id)arg0 isGuest:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif