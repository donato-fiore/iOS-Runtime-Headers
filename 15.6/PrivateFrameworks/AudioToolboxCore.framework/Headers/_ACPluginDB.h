// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ACPLUGINDB_H
#define _ACPLUGINDB_H

@class NSMutableDictionary, NSData;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _ACPluginDB : NSObject <NSSecureCoding>

 {
    NSMutableDictionary *mSearchDirectories;
    BOOL mDirty;
    NSObject<OS_dispatch_queue> *mDispatchQueue;
    function<void (AudioComponentVector &, AudioComponentVector &)> mNotificationCallback;
    function<void ()> mScanHashCallback;
    NSData *mCarbonComponentHash;
}




+(BOOL)supportsSecureCoding;
+(id)path;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct AudioComponentVector )postInit:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initialScanDirectory:(id)arg0 priority:(int)arg1 components:(*void)arg2 ;
-(void)writeIfDirty;


@end


#endif