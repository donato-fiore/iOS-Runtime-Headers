// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCUSTOMCLASSUNARCHIVER_H
#define GKCUSTOMCLASSUNARCHIVER_H

@class NSMutableDictionary, NSString;
@protocol NSKeyedUnarchiverDelegate;

#import <Foundation/Foundation.h>


@interface GKCustomClassUnarchiver : NSObject <NSKeyedUnarchiverDelegate>

 {
    NSMutableDictionary *_cache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(Class)unarchiver:(id)arg0 cannotDecodeObjectOfClassName:(id)arg1 originalClasses:(id)arg2 ;
-(id)_currentAppModuleName;
-(id)_findValidClassName:(id)arg0 ;
-(id)_mangledSwiftClassName:(id)arg0 moduleName:(id)arg1 ;
-(id)init;


@end


#endif