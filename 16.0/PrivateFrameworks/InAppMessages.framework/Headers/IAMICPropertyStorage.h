// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IAMICPROPERTYSTORAGE_H
#define IAMICPROPERTYSTORAGE_H

@class ICInAppMessageManager, NSString;
@protocol IAMPropertyStorage;

#import <Foundation/Foundation.h>


@interface IAMICPropertyStorage : NSObject <IAMPropertyStorage>

 {
    ICInAppMessageManager *_iTunesCloudIAMManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)getPropertyForKey:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)setProperty:(id)arg0 forKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(id)arg3 ;


@end


#endif