// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSFILEWATCHEROBSERVATIONS_H
#define NSFILEWATCHEROBSERVATIONS_H


#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSFileWatcherObservations : NSObject {
    BOOL _attributesChanged;
    BOOL _contentsChanged;
    BOOL _deleted;
    BOOL _moved;
    NSString *_lastObservedPath;
    BOOL _didResetPath;
    NSString *_path;
}




-(id)description;
-(id)initWithPath:(id)arg0 ;
-(void)addAnnouncedMoveToPath:(id)arg0 ;
-(void)addAttributeChange;
-(void)addContentsChange;
-(void)addDeletion;
-(void)addDetectedMoveToPath:(id)arg0 ;
-(void)dealloc;
-(void)notifyObserver:(id)arg0 ;


@end


#endif