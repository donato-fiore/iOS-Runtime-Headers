// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEHOTSPOTHELPERCOMMAND_H
#define NEHOTSPOTHELPERCOMMAND_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "NEHotspotNetwork.h"

@interface NEHotspotHelperCommand : NSObject

@property *__CNPluginCommand command; // ivar: _command
@property (readonly) NSInteger commandType;
@property (readonly) NSString *interfaceName;
@property (readonly) NEHotspotNetwork *network;
@property (readonly) NSArray *networkList;


-(id)createResponse:(NSInteger)arg0 ;
-(id)createTCPConnection:(id)arg0 ;
-(id)createUDPSession:(id)arg0 ;
-(id)description;
-(id)initWithCommand:(struct __CNPluginCommand *)arg0 ;
-(void)dealloc;


@end


#endif