// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWPROTOCOLTRANSFORM_H
#define NWPROTOCOLTRANSFORM_H

@protocol NWPrettyDescription, OS_nw_protocol_transform;

#import <Foundation/Foundation.h>

#import "NWEndpoint.h"

@interface NWProtocolTransform : NSObject <NWPrettyDescription>



@property (nonatomic) int dataMode;
@property (nonatomic) BOOL disablePathFallback;
@property (nonatomic) NSUInteger fallbackMode;
@property (retain) NSObject<OS_nw_protocol_transform> *internalTransform; // ivar: _internalTransform
@property (nonatomic) int multipathService;
@property (nonatomic) BOOL noProxy;
@property (nonatomic) BOOL prohibitDirect;
@property (copy, nonatomic) NWEndpoint *replacementEndpoint;
@property (nonatomic) BOOL tfo;
@property (nonatomic) BOOL tfoNoCookie;


-(BOOL)fastOpenForceEnable;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;
-(id)init;
-(id)initWithCTransform:(id)arg0 ;
-(id)privateDescription;
-(void)appendProtocol:(id)arg0 atLevel:(int)arg1 ;
-(void)clearProtocolsAtLevel:(int)arg0 ;
-(void)disableProtocol:(struct nw_protocol_identifier *)arg0 ;
-(void)setFastOpenForceEnable:(BOOL)arg0 ;


@end


#endif