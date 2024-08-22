// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSDOCUMENTPROXYBINDINGQUERY_H
#define _LSDOCUMENTPROXYBINDINGQUERY_H

@class LSQuery, NSString;


#import "LSDocumentProxy.h"

@interface _LSDocumentProxyBindingQuery : LSQuery

@property (readonly, retain, nonatomic) LSDocumentProxy *documentProxy; // ivar: _documentProxy
@property (readonly, copy, nonatomic) NSString *handlerRank; // ivar: _handlerRank
@property (readonly, nonatomic) unsigned char style; // ivar: _style
@property (nonatomic) BOOL yieldClaimBindings; // ivar: _yieldClaimBindings


+(BOOL)supportsSecureCoding;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDocumentProxy:(id)arg0 style:(unsigned char)arg1 handlerRank:(id)arg2 ;
-(void)_enumerateWithXPCConnection:(id)arg0 block:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)filterOpenRestrictedBindings:(*void)arg0 connection:(id)arg1 context:(struct LSContext *)arg2 earlyYield:(id)arg3 ;


@end


#endif