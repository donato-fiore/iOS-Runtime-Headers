// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NTKSHAREDJETSAMINFO_H
#define _NTKSHAREDJETSAMINFO_H

@class NSMapTable, NSLock;

#import <Foundation/Foundation.h>


@interface _NTKSharedJetsamInfo : NSObject {
    NSMapTable *_fetchers;
    NSLock *_fetchersLock;
    int _pid;
}




+(id)sharedJetsamInfo;
-(BOOL)getInfoFor:(id)arg0 into:(struct jetsam_info *)arg1 ;
-(BOOL)resetIntervalFor:(id)arg0 ;
-(id)init;
-(void)unregister:(id)arg0 ;


@end


#endif