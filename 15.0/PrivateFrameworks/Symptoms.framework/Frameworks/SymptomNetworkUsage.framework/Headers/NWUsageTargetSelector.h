// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWUSAGETARGETSELECTOR_H
#define NWUSAGETARGETSELECTOR_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface NWUsageTargetSelector : NSObject {
    BOOL _hasExplicitTCP;
    BOOL _explicitTCPValue;
    BOOL _hasExplicitUDP;
    BOOL _explicitUDPValue;
    BOOL _hasExplicitChannels;
    BOOL _explicitChannelsValue;
    BOOL _hasExplicitSockets;
    BOOL _explicitSocketsValue;
    BOOL _hasExplicitQUIC;
    BOOL _explicitQUICValue;
}


@property NSUInteger events; // ivar: _events
@property NSUInteger filter; // ivar: _filter
@property (retain) NSDictionary *suppliedParams; // ivar: _suppliedParams


-(BOOL)applySelection:(id)arg0 ;
-(BOOL)shouldAddProvider:(int)arg0 ;
-(id)description;
-(id)initWithMultipleSelections:(id)arg0 ;
-(id)initWithSelection:(id)arg0 ;


@end


#endif