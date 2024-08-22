// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSPLACEHOLDERMODEMANAGER_H
#define DNDSPLACEHOLDERMODEMANAGER_H

@class NSString;
@protocol DNDSBackingStoreDelegate, DNDSSysdiagnoseDataProvider, DNDSBackingStore;

#import <Foundation/Foundation.h>


@interface DNDSPlaceholderModeManager : NSObject <DNDSBackingStoreDelegate, DNDSSysdiagnoseDataProvider>

 {
    id<DNDSBackingStore> *_backingStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;


-(id)_readPlaceholderModesReturningError:(*id)arg0 ;
-(id)backingStore:(id)arg0 migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(NSUInteger)arg2 toVersionNumber:(NSUInteger)arg3 ;
-(id)initWithBackingStore:(id)arg0 ;
-(id)placeholderModesWithError:(*id)arg0 ;
-(id)sysdiagnoseDataForDate:(id)arg0 redacted:(BOOL)arg1 ;


@end


#endif