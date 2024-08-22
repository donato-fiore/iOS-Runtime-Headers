// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNTUCALLPROVIDER_H
#define CNTUCALLPROVIDER_H

@class NSString, TUCallProvider, NSSet;
@protocol CNTUCallProvider;

#import <Foundation/Foundation.h>


@interface CNTUCallProvider : NSObject <CNTUCallProvider>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) TUCallProvider *callProvider; // ivar: _callProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSSet *supportedHandleTypes;
@property (readonly, nonatomic) BOOL supportsAudio;
@property (readonly, nonatomic) BOOL supportsVideo;


-(id)dialRequestForHandle:(id)arg0 contact:(id)arg1 video:(BOOL)arg2 ;
-(id)initWithCallProvider:(id)arg0 ;


@end


#endif