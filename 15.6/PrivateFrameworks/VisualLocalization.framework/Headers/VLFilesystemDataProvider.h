// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(void)determineAvailabilityForCoordinate:(struct ? *)arg0 purpose:(NSInteger)arg1 callbackQueue:(id)arg2 callback:(id)arg3 ;


@end


#endif