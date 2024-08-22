// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDPAGERANKVIEW_H
#define GDPAGERANKVIEW_H

@class _PASSqliteDatabase;
@protocol GDPageRankView, GDViewAccessAssertion;

#import <Foundation/Foundation.h>


@interface GDPageRankView : NSObject <GDPageRankView>

 {
    id<GDViewAccessAssertion> *_accessAssertion;
    _PASSqliteDatabase *_db;
}




-(id)initWithAccessAssertion:(id)arg0 database:(id)arg1 ;
-(id)pageRanksWithError:(*id)arg0 ;


@end


#endif