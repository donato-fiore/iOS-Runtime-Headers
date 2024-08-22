// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXDEFAULTAUDIOCUEPROVIDER_H
#define _PXDEFAULTAUDIOCUEPROVIDER_H

@class NSDictionary, NSString;
@protocol PXAudioCueProvider;

#import <Foundation/Foundation.h>


@interface _PXDefaultAudioCueProvider : NSObject <PXAudioCueProvider>

 {
    NSDictionary *_providersByCatalog;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)requestCuesForAudioAsset:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif