// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARDDAVGETACCOUNTPROPERTIESTASKGROUP_H
#define CARDDAVGETACCOUNTPROPERTIESTASKGROUP_H

@class NSSet;


#import "CoreDAVGetAccountPropertiesTaskGroup.h"

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup

@property (readonly, nonatomic) NSSet *addressBookHomes; // ivar: _addressBookHomes
@property (readonly, nonatomic) NSSet *directoryGatewayURLs; // ivar: _directoryGatewayURLs


-(id)_copyAccountPropertiesPropFindElements;
-(id)description;
-(id)directoryGatewayURL;
-(id)homeSet;
-(void)_setPropertiesFromParsedResponses:(id)arg0 ;


@end


#endif