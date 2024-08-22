// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSTORERADIOSTREAMASSETINFO_H
#define ICSTORERADIOSTREAMASSETINFO_H

@class NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface ICStoreRadioStreamAssetInfo : NSObject {
    NSDictionary *_itemResponseDictionary;
}


@property (readonly, nonatomic) NSInteger flavor;
@property (readonly, nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;
@property (readonly, copy, nonatomic) NSURL *keyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *keyServerURL;
@property (readonly, nonatomic) NSInteger streamProtocol;
@property (readonly, copy, nonatomic) NSURL *streamURL;


-(NSInteger)ICStoreRadioStreamFlavorWithString:(id)arg0 ;
-(NSInteger)ICStoreRadioStreamProtocolWithString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithItemResponseDictionary:(id)arg0 ;


@end


#endif