// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSDESTINATION_H
#define IDSDESTINATION_H

@class NSString;
@protocol IDSDestinationProtocol, NSCopying;

#import <Foundation/Foundation.h>


@interface IDSDestination : NSObject <IDSDestinationProtocol, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDevice) BOOL device;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic, getter=isGuest) BOOL guest;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)defaultPairedDeviceDestination;
+(id)destinationWithAlias:(id)arg0 pushToken:(id)arg1 ;
+(id)destinationWithDestinations:(id)arg0 ;
+(id)destinationWithDeviceURI:(id)arg0 ;
+(id)destinationWithGroup:(id)arg0 ;
+(id)destinationWithRapportPublicIdentifierURI:(id)arg0 ;
+(id)destinationWithString:(id)arg0 ;
+(id)destinationWithStrings:(id)arg0 ;
+(id)destinationWithURI:(id)arg0 ;
+(id)sentinelSelfAliasDestination;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDestination:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)destinationURIs;
-(id)initWithCoder:(id)arg0 ;
-(id)normalizedURIStrings;
-(id)normalizedURIs;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif