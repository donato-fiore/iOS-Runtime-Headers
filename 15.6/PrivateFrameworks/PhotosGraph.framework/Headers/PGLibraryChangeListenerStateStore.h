// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGLIBRARYCHANGELISTENERSTATESTORE_H
#define PGLIBRARYCHANGELISTENERSTATESTORE_H

@class NSURL, PHPersistentChangeToken;

#import <Foundation/Foundation.h>


@interface PGLibraryChangeListenerStateStore : NSObject {
    NSURL *_changeTokenURL;
}


@property (readonly, nonatomic) PHPersistentChangeToken *changeToken;


-(id)initWithPhotoLibrary:(id)arg0 ;


@end


#endif