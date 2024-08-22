// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTOSUPERPARSERFRAME_H
#define IMTOSUPERPARSERFRAME_H



#import "IMXMLParserFrame.h"

@interface IMToSuperParserFrame : IMXMLParserFrame



-(void)parser:(id)arg0 context:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg0 context:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg0 context:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg0 context:(id)arg1 foundIgnorableWhitespace:(id)arg2 ;


@end


#endif