// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACESUPPORTDATEDATABASE_H
#define NTKFACESUPPORTDATEDATABASE_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKFaceSupportDateDatabase : NSObject {
    NSObject<OS_dispatch_queue> *_fileQueue;
    NSMutableDictionary *_lookup;
}


@property (readonly, copy, nonatomic) NSString *filePath; // ivar: _filePath


-(id)_queue_save;
-(id)initWithFileAtPath:(id)arg0 ;
-(void)_queue_loadLookup;
-(void)deleteDateForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)recordDate:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)retreiveDateForBundleIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif