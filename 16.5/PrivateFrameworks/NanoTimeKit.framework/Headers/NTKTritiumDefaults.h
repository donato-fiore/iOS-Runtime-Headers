// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKTRITIUMDEFAULTS_H
#define NTKTRITIUMDEFAULTS_H

@class NPSDomainAccessor, NSUserDefaults, NSHashTable;

#import <Foundation/Foundation.h>


@interface NTKTritiumDefaults : NSObject {
    NPSDomainAccessor *_domainAccessor;
    NSUserDefaults *_defaults;
    NSHashTable *_observers;
}




+(id)sharedInstance;
-(BOOL)allBundleIDsPrivateInTritium;
-(BOOL)isBundleIdPrivateInTritium:(id)arg0 ;
-(BOOL)isSiriPlatterPrivateInTritium:(id)arg0 ;
-(id)_domainAccessor;
-(id)_privateBundleIDs;
-(id)_privateSiriCardIDs;
-(id)init;
-(void)_observe;
-(void)_synchronize;
-(void)addObserver:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reload;
-(void)removeObserver:(id)arg0 ;
-(void)setAllBundleIDsPrivateInTritium:(BOOL)arg0 ;
-(void)setBundleIDs:(id)arg0 privateInTritium:(BOOL)arg1 ;
-(void)setSiriPlatters:(id)arg0 privateInTritium:(BOOL)arg1 ;


@end


#endif