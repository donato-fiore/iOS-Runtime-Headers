// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROTASOFTWAREUPDATEREQUESTORCLUSTERPROVIDERLOCATION_H
#define MTROTASOFTWAREUPDATEREQUESTORCLUSTERPROVIDERLOCATION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTROtaSoftwareUpdateRequestorClusterProviderLocation : NSObject

@property (retain, nonatomic) NSNumber *endpoint; // ivar: _endpoint
@property (retain, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (retain, nonatomic) NSNumber *providerNodeID; // ivar: _providerNodeID


-(id)description;
-(id)init;


@end


#endif