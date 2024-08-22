// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPITUNESSTOREINFORMATION_H
#define LPITUNESSTOREINFORMATION_H

@class SKCloudServiceController, NSMapTable, NSString;

#import <Foundation/Foundation.h>


@interface LPiTunesStoreInformation : NSObject {
    SKCloudServiceController *_cloudServiceController;
    NSMapTable *_changeHandlers;
    NSUInteger _capabilities;
    BOOL _hasUpdatedCapabilities;
    NSString *_storefrontIdentifier;
}


@property (readonly) NSUInteger capabilities;
@property (readonly, copy) NSString *storefrontIdentifier;


+(NSUInteger)_convertCapabilities:(NSUInteger)arg0 ;
+(id)_convertNewStorefrontIdentifier:(id)arg0 ;
+(id)shared;
-(NSUInteger)userStateForMediaStorefrontIdentifier:(id)arg0 ;
-(id)init;
-(void)_notifyChangeHandlers;
-(void)_storefrontDidChangeNotification;
-(void)registerForStoreAvailablityChangesWithToken:(id)arg0 handler:(id)arg1 ;
-(void)unregisterForStoreAvailablityChangesWithToken:(id)arg0 ;


@end


#endif