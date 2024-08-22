// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDFEATUREVIEW_H
#define GDFEATUREVIEW_H

@class _PASSqliteDatabase;
@protocol GDFeatureView, GDViewAccessAssertion;

#import <Foundation/Foundation.h>

#import "GDSQLFeatureRetriever.h"

@interface GDFeatureView : NSObject <GDFeatureView>

 {
    id<GDViewAccessAssertion> *_accessAssertion;
    _PASSqliteDatabase *_db;
    GDSQLFeatureRetriever *_featureRetriever;
}




-(id)expectedFeatureKeysWithError:(*id)arg0 ;
-(id)featureForKey:(id)arg0 error:(*id)arg1 ;
-(id)featureKeysWithError:(*id)arg0 ;
-(id)initWithAccessAssertion:(id)arg0 database:(id)arg1 ;


@end


#endif