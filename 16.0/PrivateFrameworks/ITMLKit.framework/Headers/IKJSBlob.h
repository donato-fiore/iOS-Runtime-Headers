// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKJSBLOB_H
#define IKJSBLOB_H

@class NSData;
@protocol IKJSBlob;


#import "IKJSObject.h"

@interface IKJSBlob : IKJSObject <IKJSBlob>

 {
    NSData *_data;
}


@property (readonly, nonatomic) NSData *data;


-(id)initWithData:(id)arg0 ;


@end


#endif