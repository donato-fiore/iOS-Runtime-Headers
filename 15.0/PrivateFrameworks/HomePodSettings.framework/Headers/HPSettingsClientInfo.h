// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPSETTINGSCLIENTINFO_H
#define HPSETTINGSCLIENTINFO_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface HPSettingsClientInfo : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (readonly, copy, nonatomic) NSUUID *endpointID; // ivar: _endpointID


-(id)initWithEndpoint:(id)arg0 ;


@end


#endif