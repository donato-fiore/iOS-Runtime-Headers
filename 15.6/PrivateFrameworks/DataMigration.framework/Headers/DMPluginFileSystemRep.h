// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMPLUGINFILESYSTEMREP_H
#define DMPLUGINFILESYSTEMREP_H

@class NSBundle, NSString;

#import <Foundation/Foundation.h>


@interface DMPluginFileSystemRep : NSObject {
    NSBundle *_bundle;
}


@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *path; // ivar: _path


+(id)allReps;
-(BOOL)isBundleValid;
-(id)initWithName:(id)arg0 atEnclosingPath:(id)arg1 ;


@end


#endif