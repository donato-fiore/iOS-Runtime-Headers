// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHELPER_H
#define HMDHELPER_H

@protocol HMDHelperExternalProtocol;

#import <Foundation/Foundation.h>


@interface HMDHelper : NSObject

@property (retain, nonatomic) NSObject<HMDHelperExternalProtocol> *externalProtocol; // ivar: _externalProtocol


+(id)sharedHelper;
+(void)setSharedHelper:(id)arg0 ;
-(id)hashedRouteIDForIdentifier:(id)arg0 ;
-(id)initWithExternalProtocol:(id)arg0 ;


@end


#endif