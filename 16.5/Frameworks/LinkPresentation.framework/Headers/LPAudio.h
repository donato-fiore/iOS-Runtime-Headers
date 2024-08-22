// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPAUDIO_H
#define LPAUDIO_H

@class NSData, NSString, AVAsset, NSURL;
@protocol AVAssetResourceLoaderDelegate, NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "LPAudioProperties.h"

@interface LPAudio : NSObject <AVAssetResourceLoaderDelegate, NSSecureCoding>

 {
    NSData *_data;
    NSObject<OS_dispatch_queue> *_mediaLoadingQueue;
    LPAudioProperties *_properties;
}


@property (readonly, copy, nonatomic) NSString *MIMEType; // ivar: _MIMEType
@property (readonly, nonatomic) AVAsset *_asset; // ivar: _asset
@property (readonly, nonatomic) NSUInteger _encodedSize;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) LPAudioProperties *properties;
@property (readonly, retain, nonatomic) NSURL *streamingURL; // ivar: _streamingURL
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)_isSubstitute;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(id)_initWithAudio:(id)arg0 ;
-(id)init;
-(id)initByReferencingFileURL:(id)arg0 MIMEType:(id)arg1 properties:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStreamingURL:(id)arg0 properties:(id)arg1 ;
-(void)_mapDataFromFileURL;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif