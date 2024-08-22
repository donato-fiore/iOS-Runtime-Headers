// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEHOTSPOTHELPERCOMMAND_H
#define NEHOTSPOTHELPERCOMMAND_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "NEHotspotNetwork.h"

@interface NEHotspotHelperCommand : NSObject {
    *__CNPluginCommand _command;
}


@property (readonly) NSInteger commandType;
@property (readonly) NEHotspotNetwork *network;
@property (readonly) NSArray *networkList;


-(id)createResponse:(NSInteger)arg0 ;
-(id)createTCPConnection:(id)arg0 ;
-(id)createUDPSession:(id)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif