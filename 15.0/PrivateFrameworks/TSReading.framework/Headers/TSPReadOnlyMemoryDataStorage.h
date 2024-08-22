// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPREADONLYMEMORYDATASTORAGE_H
#define TSPREADONLYMEMORYDATASTORAGE_H

@class NSData, NSString, SFUCryptoKey;
@protocol TSPDataStorage;

#import <Foundation/Foundation.h>


@interface TSPReadOnlyMemoryDataStorage : NSObject <TSPDataStorage>

 {
    NSData *_NSData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *documentResourceLocator;
@property (readonly, nonatomic) NSUInteger encodedLength;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL needsDownload;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSString *packageLocator;
@property (readonly, nonatomic) BOOL readOnly;
@property (readonly) Class superclass;


-(BOOL)isInPackage:(id)arg0 ;
-(id)AVAssetWithOptions:(id)arg0 contentTypeUTI:(id)arg1 ;
-(id)AVAssetWithOptions:(id)arg0 usingResourceLoaderWithContentTypeUTI:(id)arg1 ;
-(id)NSDataWithOptions:(NSUInteger)arg0 ;
-(id)bookmarkDataWithOptions:(NSUInteger)arg0 ;
-(id)filenameForPreferredFilename:(id)arg0 ;
-(id)initWithNSData:(id)arg0 ;
-(struct CGDataProvider *)newCGDataProvider;
-(struct CGImageSource *)newCGImageSource;
-(void)performIOChannelReadWithAccessor:(id)arg0 ;
-(void)performReadWithAccessor:(id)arg0 ;


@end


#endif