// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCHANGETRACKINGCLIENTID_H
#define EKCHANGETRACKINGCLIENTID_H

@class CADChangeTrackingClientId, NSString;

#import <Foundation/Foundation.h>


@interface EKChangeTrackingClientId : NSObject

@property (readonly, nonatomic) CADChangeTrackingClientId *CADChangeTrackingClientId;
@property (readonly, copy, nonatomic) NSString *customClientId; // ivar: _customClientId
@property (readonly, copy, nonatomic) NSString *suffix; // ivar: _suffix


-(id)init;
-(id)initWithCustomClientId:(id)arg0 ;
-(id)initWithCustomClientId:(id)arg0 suffix:(id)arg1 ;
-(id)initWithSuffix:(id)arg0 ;


@end


#endif