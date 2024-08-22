// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSTORERADIOSTREAMASSETINFO_H
#define MPSTORERADIOSTREAMASSETINFO_H

@class ICStoreRadioStreamAssetInfo, NSURL;

#import <Foundation/Foundation.h>


@interface MPStoreRadioStreamAssetInfo : NSObject {
    ICStoreRadioStreamAssetInfo *_internalInfo;
}


@property (readonly, nonatomic) NSInteger flavor;
@property (nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream; // ivar: _iTunesStoreStream
@property (readonly, copy, nonatomic) NSURL *keyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *keyServerURL;
@property (readonly, nonatomic) NSInteger streamProtocol;
@property (readonly, copy, nonatomic) NSURL *streamURL;


-(BOOL)isITunesStoreStream;
-(NSInteger)MPStoreRadioStreamFlavorFromICStoreRadioStreamFlavor:(NSInteger)arg0 ;
-(NSInteger)MPStoreRadioStreamProtocolFromICStoreRadioStreamProtocol:(NSInteger)arg0 ;
-(id)initWithiTunesCloudStoreRadioStreamAssetInfo:(id)arg0 ;


@end


#endif