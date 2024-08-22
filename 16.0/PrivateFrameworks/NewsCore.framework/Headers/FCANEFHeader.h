// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCANEFHEADER_H
#define FCANEFHEADER_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface FCANEFHeader : NSObject {
    NSData *_wrappingKeyID;
    NSData *_wrappedKey;
    NSString *_contentType;
    NSData *_headerData;
}




-(id)init;


@end


#endif