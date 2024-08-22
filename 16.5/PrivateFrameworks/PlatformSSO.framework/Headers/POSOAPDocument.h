// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POSOAPDOCUMENT_H
#define POSOAPDOCUMENT_H

@class NSString;
@protocol POXSDefinitionProvider;


#import "SOAPBaseDocument.h"
#import "POSOAPEnvelope.h"

@interface POSOAPDocument : SOAPBaseDocument <POXSDefinitionProvider>



@property (retain, nonatomic) POSOAPEnvelope *Envelope; // ivar: _Envelope
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)definition;
-(id)XMLStringWithOptions:(NSUInteger)arg0 ;
-(void)_XMLAttributeStringWithPrefix:(id)arg0 name:(id)arg1 value:(id)arg2 options:(NSUInteger)arg3 appendingToString:(id)arg4 ;
-(void)_XMLAttributesStringWithComplexType:(id)arg0 options:(NSUInteger)arg1 appendingToString:(id)arg2 ;
-(void)_XMLQualifiedNameForNamespace:(id)arg0 elementName:(id)arg1 options:(NSUInteger)arg2 appendingToString:(id)arg3 ;
-(void)_XMLStringWithComplexType:(id)arg0 options:(NSUInteger)arg1 appendingToString:(id)arg2 ;
-(void)_XMLStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;


@end


#endif