// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLMESSAGESMILCONTEXT_H
#define WLMESSAGESMILCONTEXT_H

@class NSString, NSArray;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface WLMessageSMILContext : NSObject <NSXMLParserDelegate>

 {
    BOOL _inBody;
    BOOL _inPar;
}


@property (readonly, nonatomic) NSString *characters; // ivar: _characters
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *parts; // ivar: _parts
@property (readonly) Class superclass;


-(id)init;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;


@end


#endif