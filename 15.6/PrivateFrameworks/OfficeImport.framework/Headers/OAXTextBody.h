// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OAXTEXTBODY_H
#define OAXTEXTBODY_H


#import <Foundation/Foundation.h>


@interface OAXTextBody : NSObject



+(?)readTextBodyFromXmlNode:(?)arg0 textBodydrawingState;
+(?)readTextBodyProperties:(?)arg0 textBodyPropertiesdrawingState;
+(id)stringWithTextAnchorType:(unsigned char)arg0 ;
+(id)stringWithTextBodyFlowType:(unsigned char)arg0 ;
+(id)stringWithTextBodyHorizontalOverflowType:(unsigned char)arg0 ;
+(id)stringWithTextBodyVerticalOverflowType:(unsigned char)arg0 ;
+(id)stringWithTextBodyWrapType:(unsigned char)arg0 ;
+(unsigned char)readAnchorType:(id)arg0 ;
+(unsigned char)readFlowType:(id)arg0 ;
+(unsigned char)readHorizontalOverflowType:(id)arg0 ;
+(void)readFlowType:(id)arg0 textBodyProperties:(id)arg1 ;
+(void)readHorizontalOverflowType:(id)arg0 textBodyProperties:(id)arg1 ;
+(void)readVerticalOverflowType:(id)arg0 textBodyProperties:(id)arg1 ;
+(void)readWrapType:(id)arg0 textBodyProperties:(id)arg1 ;
+(void)writeTextBodyAutoFit:(id)arg0 to:(id)arg1 ;


@end


#endif