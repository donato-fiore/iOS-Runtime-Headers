// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDPERSONVIEW_H
#define GDPERSONVIEW_H

@class _PASSqliteDatabase;
@protocol GDPersonView, GDViewAccessAssertion;

#import <Foundation/Foundation.h>

#import "GDSQLGraphObjectRetriever.h"

@interface GDPersonView : NSObject <GDPersonView>

 {
    id<GDViewAccessAssertion> *_accessAssertion;
    GDSQLGraphObjectRetriever *_personRetriever;
    _PASSqliteDatabase *_db;
}




-(id)initWithAccessAssertion:(id)arg0 database:(id)arg1 ;
-(void)enumeratePeopleWithBlock:(id)arg0 ;


@end


#endif