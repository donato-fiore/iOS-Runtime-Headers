// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFDISAMBIGUATIONSTORE_H
#define AFDISAMBIGUATIONSTORE_H


#import <Foundation/Foundation.h>

#import "AFManagedStorageConnection.h"

@interface AFDisambiguationStore : NSObject {
    AFManagedStorageConnection *_store;
}




-(id)_store;
-(id)infoForIdentifier:(id)arg0 ;
-(void)reset;
-(void)saveInfo:(id)arg0 forIdentifier:(id)arg1 ;


@end


#endif