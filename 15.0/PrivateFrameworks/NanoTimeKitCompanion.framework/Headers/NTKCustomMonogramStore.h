// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCUSTOMMONOGRAMSTORE_H
#define NTKCUSTOMMONOGRAMSTORE_H

@class NPSManager;

#import <Foundation/Foundation.h>


@interface NTKCustomMonogramStore : NSObject {
    NPSManager *_npsManager;
}




+(id)sharedInstance;
-(id)_customMonogramFromPrefs;
-(id)customMonogram;
-(id)init;
-(void)_notifyClientsOfChange;
-(void)dealloc;
-(void)setCustomMonogram:(id)arg0 ;


@end


#endif