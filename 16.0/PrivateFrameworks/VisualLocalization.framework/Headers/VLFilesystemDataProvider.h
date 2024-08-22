// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VLFILESYSTEMDATAPROVIDER_H
#define VLFILESYSTEMDATAPROVIDER_H

@class NSURL, NSString;
@protocol VLLocalizationDataProvider, VLLocalizationDataProviderDelegate;

#import <Foundation/Foundation.h>


@interface VLFilesystemDataProvider : NSObject <VLLocalizationDataProvider>

 {
    NSURL *_baseDirectory;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VLLocalizationDataProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)fileURLForKey:(struct ? *)arg0 error:(*id)arg1 ;
-(id)initWithBaseDirectory:(id)arg0 ;
-(void)determineAvailabilityForCoordinate:(struct ? *)arg0 horizontalAccuracy:(CGFloat)arg1 purpose:(NSInteger)arg2 callbackQueue:(id)arg3 callback:(id)arg4 ;


@end


#endif