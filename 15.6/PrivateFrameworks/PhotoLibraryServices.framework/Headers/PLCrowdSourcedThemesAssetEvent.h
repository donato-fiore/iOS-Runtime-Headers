// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCROWDSOURCEDTHEMESASSETEVENT_H
#define PLCROWDSOURCEDTHEMESASSETEVENT_H

@class NSString;
@protocol BMStoreData;

#import <Foundation/Foundation.h>


@interface PLCrowdSourcedThemesAssetEvent : NSObject <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion; // ivar: dataVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uuid; // ivar: _uuid


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)initWithUUID:(id)arg0 ;
-(id)serialize;


@end


#endif