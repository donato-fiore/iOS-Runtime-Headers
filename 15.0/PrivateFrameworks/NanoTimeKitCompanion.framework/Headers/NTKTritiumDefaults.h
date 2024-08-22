// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKTRITIUMDEFAULTS_H
#define NTKTRITIUMDEFAULTS_H

@class NPSDomainAccessor;

#import <Foundation/Foundation.h>


@interface NTKTritiumDefaults : NSObject {
    NPSDomainAccessor *_domainAccessor;
}




+(id)sharedInstance;
-(BOOL)allBundleIDsPrivateInTritium;
-(BOOL)isBundleIdPrivateInTritium:(id)arg0 ;
-(BOOL)isSiriPlatterPrivateInTritium:(id)arg0 ;
-(id)_domainAccessor;
-(id)_privateBundleIDs;
-(id)_privateSiriCardIDs;
-(id)init;
-(void)_synchronize;
-(void)setAllBundleIDsPrivateInTritium:(BOOL)arg0 ;
-(void)setBundleIDs:(id)arg0 privateInTritium:(BOOL)arg1 ;
-(void)setSiriPlatters:(id)arg0 privateInTritium:(BOOL)arg1 ;


@end


#endif