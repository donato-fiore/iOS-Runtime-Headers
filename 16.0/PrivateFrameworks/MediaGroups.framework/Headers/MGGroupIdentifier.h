// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MGGROUPIDENTIFIER_H
#define MGGROUPIDENTIFIER_H

@class NSURLComponents, NSString;
@protocol NSSecureCoding, MGGroupIdentifierProtocol;

#import <Foundation/Foundation.h>


@interface MGGroupIdentifier : NSObject <NSSecureCoding, MGGroupIdentifierProtocol>



@property (readonly, copy, nonatomic) NSURLComponents *components; // ivar: _components
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *normalized;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)groupIdentifierWithUUID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURLComponents:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif