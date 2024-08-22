// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITELEMENT_H
#define AXAUDITELEMENT_H

@class AXElement, NSString;
@protocol AXAuditTransportableObjectProtocol, NSCopying;

#import <Foundation/Foundation.h>


@interface AXAuditElement : NSObject <AXAuditTransportableObjectProtocol, NSCopying>



@property (copy, nonatomic) id *accessibilityIdentifier; // ivar: _accessibilityIdentifier
@property (copy, nonatomic) AXElement *axElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *platformElementToken; // ivar: _platformElementToken
@property (readonly) Class superclass;


+(id)auditElementWithElement:(id)arg0 identifier:(id)arg1 ;
+(void)registerTransportableObjectWithManager:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct __AXUIElement *)createAxElementRefForXCTest;


@end


#endif