// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLNETWORKENERGYMODEL_H
#define PLNETWORKENERGYMODEL_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PLNetworkEnergyModel : NSObject

@property (retain) NSArray *linkCost; // ivar: _linkCost
@property (retain) NSArray *linkDuration; // ivar: _linkDuration
@property (retain) NSArray *linkLevel1Parameters; // ivar: _linkLevel1Parameters
@property unsigned char linkType; // ivar: _linkType
@property CGFloat overallBytes; // ivar: _overallBytes
@property CGFloat overallDuration; // ivar: _overallDuration
@property CGFloat powerlevel1Duration; // ivar: _powerlevel1Duration
@property CGFloat powerlevel2Duration; // ivar: _powerlevel2Duration
@property CGFloat powerlevel3Duration; // ivar: _powerlevel3Duration
@property (retain) NSString *taskUUID; // ivar: _taskUUID
@property unsigned int updateCount; // ivar: _updateCount


-(CGFloat)computeLevel1TimeWithBytes:(CGFloat)arg0 ;
-(CGFloat)getEnergy;
-(id)description;
-(id)initWithLinkType:(unsigned char)arg0 ;
-(id)initWithLinkType:(unsigned char)arg0 withTaskUUID:(id)arg1 ;
-(void)reportEnergyToPowerlogWithClientID:(short)arg0 ;
-(void)updateAllLevelTimesWithLevel1Time:(CGFloat)arg0 withUpdateDuration:(CGFloat)arg1 ;
-(void)updateWithBytes:(CGFloat)arg0 withDuration:(CGFloat)arg1 ;


@end


#endif