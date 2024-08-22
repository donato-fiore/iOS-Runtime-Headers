// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLFILESYSTEMITERATOR_H
#define PLFILESYSTEMITERATOR_H

@class NSString, NSFileManager, NSError;

#import <Foundation/Foundation.h>


@interface PLFilesystemIterator : NSObject {
    NSString *_path;
    NSFileManager *_fileManager;
}


@property (readonly, copy) NSError *error; // ivar: _error


-(id)initWithFilePath:(id)arg0 ;
-(void)visitURLsLoadingPropertiesForKeys:(id)arg0 withBlock:(id)arg1 ;


@end


#endif