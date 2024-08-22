// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITPOINT_H
#define AXAUDITPOINT_H

@class NSString;
@protocol AXAuditTransportableObjectProtocol;

#import <Foundation/Foundation.h>


@interface AXAuditPoint : NSObject <AXAuditTransportableObjectProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint point; // ivar: _point
@property (readonly) Class superclass;


+(id)createWithPoint:(struct CGPoint )arg0 ;
+(void)registerTransportableObjectWithManager:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif