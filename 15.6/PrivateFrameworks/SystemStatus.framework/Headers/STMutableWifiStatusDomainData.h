// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STMUTABLEWIFISTATUSDOMAINDATA_H
#define STMUTABLEWIFISTATUSDOMAINDATA_H

@class NSString;
@protocol STMutableStatusDomainDataDifferencing, STMutableStatusDomainData;


#import "STWifiStatusDomainData.h"

@interface STMutableWifiStatusDomainData : STWifiStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>



@property (nonatomic, getter=isAssociatedToIOSHotspot) BOOL associatedToIOSHotspot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger signalStrengthBars;
@property (readonly) Class superclass;
@property (nonatomic, getter=isWifiActive) BOOL wifiActive;


-(BOOL)applyDiff:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif