// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSAPPCHANNELSFILTER_H
#define VSAPPCHANNELSFILTER_H

@class NSArray, NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface VSAppChannelsFilter : NSObject

@property (copy, nonatomic) NSArray *allChannelMappings; // ivar: _allChannelMappings
@property (copy, nonatomic) NSDictionary *appsByChannelID; // ivar: _appsByChannelID
@property (copy, nonatomic) NSSet *genericAppAdamIDs; // ivar: _genericAppAdamIDs
@property (copy, nonatomic) NSSet *personalAppAdamIDs; // ivar: _personalAppAdamIDs
@property (readonly, copy, nonatomic) NSArray *personalAppDescriptions;
@property (copy, nonatomic) NSSet *personalChannelIDs; // ivar: _personalChannelIDs


-(id)init;
-(void)_updateAdamIDs;


@end


#endif