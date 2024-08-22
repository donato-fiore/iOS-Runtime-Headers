// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDSQLFEATURERETRIEVER_H
#define GDSQLFEATURERETRIEVER_H

@class _PASSqliteDatabase;

#import <Foundation/Foundation.h>


@interface GDSQLFeatureRetriever : NSObject {
    _PASSqliteDatabase *_db;
}




-(id)featureForKey:(id)arg0 error:(*id)arg1 ;
-(id)featureKeysWithError:(*id)arg0 ;
-(id)initWithDatabase:(id)arg0 ;


@end


#endif