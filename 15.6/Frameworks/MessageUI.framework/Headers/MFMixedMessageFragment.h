// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMIXEDMESSAGEFRAGMENT_H
#define MFMIXEDMESSAGEFRAGMENT_H

@class NSString, NSData, NSURL;

#import <Foundation/Foundation.h>


@interface MFMixedMessageFragment : NSObject {
    NSString *_markupString;
    NSData *_markupData;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSURL *_baseURL;
}




-(id)baseURL;
-(id)description;
-(id)encodingName;
-(id)initWithMarkupData:(id)arg0 textEncodingName:(id)arg1 baseURL:(id)arg2 ;
-(id)initWithMarkupString:(id)arg0 baseURL:(id)arg1 ;
-(id)markupData;
-(id)markupString;
-(id)mimeType;


@end


#endif