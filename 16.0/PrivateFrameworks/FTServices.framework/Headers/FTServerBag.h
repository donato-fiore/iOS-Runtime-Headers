// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTSERVERBAG_H
#define FTSERVERBAG_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface FTServerBag : NSObject {
    NSInteger _type;
}


@property (readonly) BOOL allowSelfSignedCertificates;
@property (readonly) BOOL allowUnsignedBags;
@property (readonly) NSString *apsEnvironmentName;
@property (readonly) NSURL *bagURL;
@property (readonly) BOOL isInDebilitatedMode;
@property (readonly) BOOL isLoaded;
@property (readonly) BOOL isLoading;
@property (readonly) BOOL isServerAvailable;


+(id)_sharedInstance;
+(id)_sharedInstanceForType:(NSInteger)arg0 ;
+(id)sharedInstance;
+(id)sharedInstanceForBagType:(NSInteger)arg0 ;
-(id)_bag;
-(id)_cachedBag;
-(id)initWithBagType:(NSInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)urlWithKey:(id)arg0 ;
-(void)dealloc;
-(void)forceBagLoad;
-(void)startBagLoad;


@end


#endif