// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETCONNECTIONHEADER_H
#define SASETCONNECTIONHEADER_H

@class NSString;


#import "SABaseClientBoundCommand.h"
#import "SAConnectionPolicy.h"

@interface SASetConnectionHeader : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *aceHostHeader;
@property (retain, nonatomic) SAConnectionPolicy *connectionPolicy;
@property (nonatomic) BOOL reconnectNow;


+(id)setConnectionHeader;
+(id)setConnectionHeaderWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif