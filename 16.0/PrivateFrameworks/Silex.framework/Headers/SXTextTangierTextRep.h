// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXTEXTTANGIERTEXTREP_H
#define SXTEXTTANGIERTEXTREP_H

@class TSWPRep, NSString;
@protocol SXAXCustomRotorItemProvider;



@interface SXTextTangierTextRep : TSWPRep <SXAXCustomRotorItemProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)directlyManagesLayerContent;
-(Class)wpEditorClass;
-(id)storage;
-(id)supportedCustomRotors;
-(void)dealloc;
-(void)didUpdateLayer:(id)arg0 ;


@end


#endif