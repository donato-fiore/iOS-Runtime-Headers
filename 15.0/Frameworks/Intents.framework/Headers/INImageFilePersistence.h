// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INIMAGEFILEPERSISTENCE_H
#define INIMAGEFILEPERSISTENCE_H

@class NSArray, NSString;
@protocol INImageStoring;

#import <Foundation/Foundation.h>

#import "INImageBundle.h"

@interface INImageFilePersistence : NSObject <INImageStoring>

 {
    INImageBundle *_imageBundle;
}


@property (copy, nonatomic, setter=_setSupportedClasses:) NSArray *_supportedClasses; // ivar: __supportedClasses
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) NSUInteger servicePriority;
@property (readonly) Class superclass;


-(BOOL)canStoreImage:(id)arg0 ;
-(id)_deleteItemAtFilePath:(id)arg0 ;
-(id)_filePathForImageWithFileName:(id)arg0 ;
-(id)init;
-(id)storeImage:(id)arg0 scaled:(BOOL)arg1 qualityOfService:(unsigned int)arg2 storeType:(NSUInteger)arg3 error:(*id)arg4 ;
-(void)purgeExpiredImagesInEphemeralStore;
-(void)purgeImageWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)retrieveImageWithIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif