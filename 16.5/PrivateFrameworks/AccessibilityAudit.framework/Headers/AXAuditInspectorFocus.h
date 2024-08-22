// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITINSPECTORFOCUS_H
#define AXAUDITINSPECTORFOCUS_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "AXAuditElement.h"

@interface AXAuditInspectorFocus : NSObject

@property (copy, nonatomic) NSString *captionText; // ivar: _captionText
@property (retain, nonatomic) AXAuditElement *element; // ivar: _element
@property (retain, nonatomic) NSArray *inspectorSections; // ivar: _inspectorSections
@property (copy, nonatomic) NSString *spokenDescription; // ivar: _spokenDescription


+(void)registerTransportableObjectWithManager:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif