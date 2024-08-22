// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ACPLUGINDBDIRECTORY_H
#define _ACPLUGINDBDIRECTORY_H

@class NSString, NSMutableDictionary, NSData, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_ACPluginDB.h"

@interface _ACPluginDBDirectory : NSObject <NSSecureCoding>

 {
    _ACPluginDB *mDB;
    NSString *mFullPath;
    CGFloat mModificationDate;
    int mPriority;
    NSMutableDictionary *mBundlesByName;
    *__FSEventStream mFSMonitor;
    CGFloat mCurrentModificationDate;
    NSData *mCarbonComponentHash;
    BOOL mComponentsLoadable;
    NSMutableArray *mChangedBundlePaths;
    NSUInteger mNrOfPathsChanged;
    BOOL mShouldRescan;
}




+(BOOL)supportsSecureCoding;
-(BOOL)refreshModificationDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPath:(id)arg0 priority:(int)arg1 ;
-(id)scanBundle:(id)arg0 loadable:(BOOL)arg1 ;
-(void)bundlesChanged:(id)arg0 shouldRescan:(BOOL)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)eventStreamCallback:(id)arg0 flags:(*unsigned int)arg1 ;
-(void)loadAllComponents:(*void)arg0 ;
-(void)monitorDirectory;
-(void)scanDirectory;


@end


#endif