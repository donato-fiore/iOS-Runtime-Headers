// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDDONATIONVIEW_H
#define GDDONATIONVIEW_H

@class _PASSqliteDatabase;
@protocol GDDonationView, GDViewAccessAssertion;

#import <Foundation/Foundation.h>


@interface GDDonationView : NSObject <GDDonationView>

 {
    id<GDViewAccessAssertion> *_accessAssertion;
    _PASSqliteDatabase *_db;
}




-(id)initWithAccessAssertion:(id)arg0 database:(id)arg1 ;
-(void)enumerateTriples:(id)arg0 ;


@end


#endif