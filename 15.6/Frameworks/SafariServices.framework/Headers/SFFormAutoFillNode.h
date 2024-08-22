// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFFORMAUTOFILLNODE_H
#define SFFORMAUTOFILLNODE_H

@class NSString, WKWebProcessPlugInNodeHandle;
@protocol WBSFormAutoFillNode;

#import <Foundation/Foundation.h>


@interface SFFormAutoFillNode : NSObject <WBSFormAutoFillNode>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WKWebProcessPlugInNodeHandle *nodeHandle; // ivar: _nodeHandle
@property (readonly) Class superclass;


+(id)autoFillNodeWithNodeHandle:(id)arg0 ;
-(BOOL)isHTMLInputElementUserEdited;
-(BOOL)isHTMLTextAreaElementUserEdited;
-(NSInteger)htmlInputElementAutoFillButtonType;
-(NSInteger)htmlInputElementLastAutoFillButtonType;
-(id)initWithJSWrapper:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1 ;
-(id)initWithNodeHandle:(id)arg0 ;
-(struct CGRect )elementBounds;
-(void)setHTMLInputElementAutoFilledWithAutomaticStrongPassword:(BOOL)arg0 ;
-(void)setHTMLInputElementAutofilled:(BOOL)arg0 ;


@end


#endif