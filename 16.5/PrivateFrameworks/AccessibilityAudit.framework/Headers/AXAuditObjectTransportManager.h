// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITOBJECTTRANSPORTMANAGER_H
#define AXAUDITOBJECTTRANSPORTMANAGER_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface AXAuditObjectTransportManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *_keyToTransportInfo; // ivar: __keyToTransportInfo
@property (retain, nonatomic) NSMutableArray *_transportInfoEncodeOnly; // ivar: __transportInfoEncodeOnly
@property (nonatomic) BOOL enforceSecureTransport; // ivar: _enforceSecureTransport


+(id)sharedManager;
-(BOOL)validateSupportedConnectionSecureTransport:(id)arg0 ;
-(id)_transportInfoEncodeOnlyForObject:(id)arg0 ;
-(id)_transportInfoForObject:(id)arg0 ;
-(id)arrayForTransportArray:(id)arg0 expectedClass:(Class)arg1 ;
-(id)init;
-(id)objectForTransportDictionary:(id)arg0 expectedClass:(Class)arg1 ;
-(id)transportArrayForArray:(id)arg0 ;
-(id)transportDictionaryForObject:(id)arg0 ;
-(void)_registerKnownClasses;
-(void)_validateTransportObjectIfNeeded:(id)arg0 ;
-(void)registerTransportInfoMasquerade:(id)arg0 encodeOnly:(BOOL)arg1 ;
-(void)registerTransportInfoPropertyBased:(id)arg0 ;
-(void)registerTransportableClass:(Class)arg0 ;


@end


#endif