// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLINKSNIPPETENVIRONMENTDIALOGRESPONSE_H
#define WFLINKSNIPPETENVIRONMENTDIALOGRESPONSE_H

@class WFDialogResponse, LNSnippetEnvironment;



@interface WFLinkSnippetEnvironmentDialogResponse : WFDialogResponse

@property (readonly, copy, nonatomic) LNSnippetEnvironment *environment; // ivar: _environment


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCancelled:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif