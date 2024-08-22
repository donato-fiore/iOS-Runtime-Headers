// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HOMEKITAGENT_H
#define HOMEKITAGENT_H

@class HMHomeManager, IDSService, NSString;
@protocol HMHomeManagerDelegate;

#import <Foundation/Foundation.h>


@interface HomeKitAgent : NSObject <HMHomeManagerDelegate>

 {
    HMHomeManager *_homeManager;
    BOOL _didUpdateHomes;
    IDSService *_idsService;
    id *_completionBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_loadHomeKit;
-(id)initWithIDSService:(id)arg0 ;
-(void)_replyWithResidentDevicesIDSIdentifiers:(id)arg0 ;
-(void)dealloc;
-(void)fetchResidentDevicesIDSIdentifiersWithReply:(id)arg0 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;


@end


#endif