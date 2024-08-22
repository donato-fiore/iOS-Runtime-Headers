// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCC8TTSASSET18TTSASSETMASTRATEGY23DOWNLOADSOURCEEXTRACTOR_H
#define _TTCC8TTSASSET18TTSASSETMASTRATEGY23DOWNLOADSOURCEEXTRACTOR_H

@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC8TTSAsset18TTSAssetMAStrategy23DownloadSourceExtractor : NSObject <NSXMLParserDelegate>

 {
    ? inKey;
    ? wantValue;
    ? text;
    ? source;
}




-(id)init;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;


@end


#endif