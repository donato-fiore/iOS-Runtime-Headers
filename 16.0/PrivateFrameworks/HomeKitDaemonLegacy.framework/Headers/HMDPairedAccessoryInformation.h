// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDPAIREDACCESSORYINFORMATION_H
#define HMDPAIREDACCESSORYINFORMATION_H

@class NSString, NSData;
@protocol HMDAccessoryBrowserDelegate;

#import <Foundation/Foundation.h>


@interface HMDPairedAccessoryInformation : NSObject

@property (readonly, weak) NSObject<HMDAccessoryBrowserDelegate> *delegate; // ivar: _delegate
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSData *setupHash; // ivar: _setupHash
@property (readonly) NSUInteger transports; // ivar: _transports


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithIdentifier:(id)arg0 transports:(NSUInteger)arg1 setupHash:(id)arg2 delegate:(id)arg3 ;


@end


#endif