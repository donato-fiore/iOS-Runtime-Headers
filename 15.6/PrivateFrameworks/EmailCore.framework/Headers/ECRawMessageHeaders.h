// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECRAWMESSAGEHEADERS_H
#define ECRAWMESSAGEHEADERS_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface ECRawMessageHeaders : NSObject {
    NSMutableDictionary *_headers;
    NSMutableArray *_orderedHeaders;
}




-(id)allHeaderKeys;
-(id)allHeaders;
-(id)firstHeaderForKey:(id)arg0 ;
-(id)headersForKey:(id)arg0 ;
-(id)initWithHeaderString:(id)arg0 ;


@end


#endif