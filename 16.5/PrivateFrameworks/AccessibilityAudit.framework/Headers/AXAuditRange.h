// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITRANGE_H
#define AXAUDITRANGE_H

@class NSString;
@protocol AXAuditTransportableObjectProtocol;

#import <Foundation/Foundation.h>


@interface AXAuditRange : NSObject <AXAuditTransportableObjectProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) _NSRange range; // ivar: _range
@property (readonly) Class superclass;


+(id)createWithRange:(struct _NSRange )arg0 ;
+(void)registerTransportableObjectWithManager:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif