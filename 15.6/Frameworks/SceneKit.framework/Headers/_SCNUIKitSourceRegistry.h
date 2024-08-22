// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SCNUIKITSOURCEREGISTRY_H
#define _SCNUIKITSOURCEREGISTRY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _SCNUIKitSourceRegistry : NSObject {
    NSMutableArray *_sources;
}




+(id)sharedInstance;
+(void)registerUIKitSource:(id)arg0 ;
+(void)unregisterUIKitSource:(id)arg0 ;
-(id)init;
-(void)add:(id)arg0 ;
-(void)apply:(id)arg0 ;
-(void)dealloc;
-(void)remove:(id)arg0 ;


@end


#endif