// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWENDPOINT_H
#define NWENDPOINT_H

@class NSString, NSData;
@protocol NWPrettyDescription, NSSecureCoding, NSCopying, OS_nw_endpoint;

#import <Foundation/Foundation.h>

#import "NWInterface.h"

@interface NWEndpoint : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>



@property (nonatomic) unsigned short alternatePort;
@property (retain, nonatomic) NWInterface *interface;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *internalEndpoint; // ivar: _internalEndpoint
@property (readonly, nonatomic) NSString *parentEndpointDomain;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (nonatomic) NSInteger remoteInterfaceType;
@property (retain, nonatomic) NSData *txtRecord;


+(BOOL)supportsResolverCallback;
+(BOOL)supportsSecureCoding;
+(Class)copyClassForEndpointType:(int)arg0 ;
+(id)endpointWithCEndpoint:(id)arg0 ;
+(id)endpointWithInternalEndpoint:(id)arg0 ;
+(id)endpointWithProtocolBufferData:(id)arg0 ;
+(unsigned int)endpointType;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyCEndpoint;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createProtocolBufferObject;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;
-(id)encodedData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEncodedData:(id)arg0 ;
-(id)initWithEndpoint:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resolveEndpointWithCompletionHandler:(id)arg0 ;


@end


#endif