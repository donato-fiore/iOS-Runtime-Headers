// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWPATHFLOW_H
#define NWPATHFLOW_H

@class NSUUID;
@protocol NWPrettyDescription, OS_nw_path_flow;

#import <Foundation/Foundation.h>

#import "NWInterface.h"
#import "NWEndpoint.h"

@interface NWPathFlow : NSObject <NWPrettyDescription>



@property (readonly, nonatomic, getter=isAssigned) BOOL assigned;
@property (readonly, nonatomic, getter=isDefunct) BOOL defunct;
@property (readonly, nonatomic, getter=isDirect) BOOL direct;
@property (readonly, nonatomic) NSUUID *flowID;
@property (readonly, nonatomic) NWInterface *interface;
@property (readonly) NSObject<OS_nw_path_flow> *internalPathFlow; // ivar: _internalPathFlow
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, nonatomic) NWEndpoint *localEndpoint;
@property (readonly, nonatomic) NSUUID *nexusAgent;
@property (readonly, nonatomic) NSUUID *nexusInstance;
@property (readonly, nonatomic) unsigned int nexusPort;
@property (readonly, nonatomic) NWEndpoint *remoteEndpoint;
@property (readonly, nonatomic) BOOL supportsIPv4;
@property (readonly, nonatomic) BOOL supportsIPv6;
@property (readonly, nonatomic, getter=isViable) BOOL viable;


-(id)description;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;
-(id)initWithPathFlow:(id)arg0 ;
-(id)privateDescription;


@end


#endif