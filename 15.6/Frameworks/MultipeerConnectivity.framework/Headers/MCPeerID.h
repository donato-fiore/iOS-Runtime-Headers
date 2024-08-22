// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCPEERID_H
#define MCPEERID_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MCPeerIDInternal.h"

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding>

 {
    MCPeerIDInternal *_internal;
}


@property (readonly, nonatomic) NSString *displayName;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)pid64;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)idString;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayName:(id)arg0 ;
-(id)initWithIDString:(id)arg0 displayName:(id)arg1 ;
-(id)initWithPID:(unsigned int)arg0 displayName:(id)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(id)internalDescription;
-(id)serializedRepresentation;
-(unsigned int)pid;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif