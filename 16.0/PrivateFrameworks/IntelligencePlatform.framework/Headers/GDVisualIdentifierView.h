// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDVISUALIDENTIFIERVIEW_H
#define GDVISUALIDENTIFIERVIEW_H

@class _PASSqliteDatabase;
@protocol GDVisualIdentifierView, GDViewAccessAssertion;

#import <Foundation/Foundation.h>

#import "GDSQLGraphObjectRetriever.h"

@interface GDVisualIdentifierView : NSObject <GDVisualIdentifierView>

 {
    id<GDViewAccessAssertion> *_accessAssertion;
    _PASSqliteDatabase *_db;
    GDSQLGraphObjectRetriever *_personRetriever;
    GDSQLGraphObjectRetriever *_locationRetriever;
}




-(id)initWithAccessAssertion:(id)arg0 database:(id)arg1 ;
-(id)personForIdentifier:(id)arg0 ;
-(void)enumeratePeopleMatchingName:(id)arg0 block:(id)arg1 ;
-(void)enumeratePeopleWithBlock:(id)arg0 ;
-(void)linkLocationsForPerson:(id)arg0 ;


@end


#endif