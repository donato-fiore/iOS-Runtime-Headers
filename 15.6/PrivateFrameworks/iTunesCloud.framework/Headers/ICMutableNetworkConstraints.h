// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMUTABLENETWORKCONSTRAINTS_H
#define ICMUTABLENETWORKCONSTRAINTS_H



#import "ICNetworkConstraints.h"

@interface ICMutableNetworkConstraints : ICNetworkConstraints



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)setShouldAllowData:(BOOL)arg0 forNetworkType:(NSInteger)arg1 ;
-(void)setShouldAllowDataForAllNetworkTypes:(BOOL)arg0 ;
-(void)setShouldAllowDataForCellularNetworkTypes:(BOOL)arg0 ;
-(void)setShouldAllowDataForWiFiNetworkTypes:(BOOL)arg0 ;
-(void)setSizeLimit:(id)arg0 forNetworkType:(NSInteger)arg1 ;


@end


#endif