// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITINSPECTORSECTION_H
#define AXAUDITINSPECTORSECTION_H

@class NSMutableArray, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AXAuditInspectorSection : NSObject

@property (retain, nonatomic) NSMutableArray *_elementAttributes; // ivar: __elementAttributes
@property (readonly, retain, nonatomic) NSArray *elementAttributes;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *title; // ivar: _title


+(void)registerTransportableObjectWithManager:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)addAttribute:(id)arg0 performsAction:(BOOL)arg1 humanReadable:(id)arg2 settable:(BOOL)arg3 valueType:(NSInteger)arg4 isInternal:(BOOL)arg5 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)addAttribute:(id)arg0 ;


@end


#endif