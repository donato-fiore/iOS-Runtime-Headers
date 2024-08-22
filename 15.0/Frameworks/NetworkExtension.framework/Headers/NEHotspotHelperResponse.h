// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEHOTSPOTHELPERRESPONSE_H
#define NEHOTSPOTHELPERRESPONSE_H


#import <Foundation/Foundation.h>


@interface NEHotspotHelperResponse : NSObject

@property *__CNPluginResponse response; // ivar: _response


-(id)description;
-(id)initWithResponse:(struct __CNPluginResponse *)arg0 ;
-(void)dealloc;
-(void)deliver;
-(void)setNetwork:(id)arg0 ;
-(void)setNetworkList:(id)arg0 ;


@end


#endif