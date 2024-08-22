// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITNODE_H
#define AXAUDITNODE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "AXAuditElement.h"

@interface AXAuditNode : NSObject

@property (retain, nonatomic) AXAuditElement *auditElement; // ivar: _auditElement
@property (retain, nonatomic) NSArray *children; // ivar: _children
@property (copy, nonatomic) NSString *className; // ivar: _className
@property (copy, nonatomic) NSString *humanReadableDescription; // ivar: _humanReadableDescription
@property (copy, nonatomic) NSString *humanReadableRoleDescription; // ivar: _humanReadableRoleDescription
@property (nonatomic) BOOL isIgnored; // ivar: _isIgnored


+(void)registerTransportableObjectWithManager:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAuditElement:(id)arg0 description:(id)arg1 roleDescription:(id)arg2 ;
-(void)_printDescendantsWithLevel:(NSUInteger)arg0 ;
-(void)debugPrintDescendants;


@end


#endif