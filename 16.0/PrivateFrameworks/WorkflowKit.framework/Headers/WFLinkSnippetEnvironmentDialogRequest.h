// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLINKSNIPPETENVIRONMENTDIALOGREQUEST_H
#define WFLINKSNIPPETENVIRONMENTDIALOGREQUEST_H

@class WFDialogRequest;
@protocol NSSecureCoding;



@interface WFLinkSnippetEnvironmentDialogRequest : WFDialogRequest <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)initWithAttribution:(id)arg0 prompt:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif