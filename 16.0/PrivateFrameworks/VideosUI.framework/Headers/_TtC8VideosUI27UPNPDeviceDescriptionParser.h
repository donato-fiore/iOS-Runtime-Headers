// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI27UPNPDEVICEDESCRIPTIONPARSER_H
#define _TTC8VIDEOSUI27UPNPDEVICEDESCRIPTIONPARSER_H

@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8VideosUI27UPNPDeviceDescriptionParser : NSObject <NSXMLParserDelegate>

 {
    ? scratchpad;
    ? currentElementName;
    ? xmlPath;
}




-(id)init;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;


@end


#endif