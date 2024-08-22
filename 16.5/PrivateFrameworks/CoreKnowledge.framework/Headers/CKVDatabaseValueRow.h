// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVDATABASEVALUEROW_H
#define CKVDATABASEVALUEROW_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CKVDatabaseValueRow : NSObject {
    NSArray *_databaseValueArray;
}




-(NSUInteger)count;
-(id)dataValueAtColumnIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithDatabaseValueArray:(id)arg0 ;
-(id)numberValueAtColumnIndex:(NSUInteger)arg0 ;
-(id)stringValueAtColumnIndex:(NSUInteger)arg0 ;


@end


#endif