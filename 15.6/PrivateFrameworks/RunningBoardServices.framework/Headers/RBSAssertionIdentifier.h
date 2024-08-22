// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSASSERTIONIDENTIFIER_H
#define RBSASSERTIONIDENTIFIER_H

@class NSString;
@protocol RBSXPCSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RBSAssertionIdentifier : NSObject <RBSXPCSecureCoding, NSCopying>

 {
    NSString *_desc;
    NSUInteger _hash;
}


@property (readonly, nonatomic) int clientPid; // ivar: _clientPid
@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int serverPid; // ivar: _serverPid
@property (readonly) Class superclass;


+(BOOL)supportsRBSXPCSecureCoding;
+(id)identifierWithClientPid:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;


@end


#endif