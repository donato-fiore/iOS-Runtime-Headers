// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKDICTIONARYROWTABLEENTRIES_H
#define CRKDICTIONARYROWTABLEENTRIES_H

@class NSArray, NSString;
@protocol CRKTableEntries;

#import <Foundation/Foundation.h>


@interface CRKDictionaryRowTableEntries : NSObject <CRKTableEntries>

 {
    NSArray *mObjects;
    NSArray *mKeys;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)columnCount;
-(NSUInteger)rowCount;
-(id)entryAtRow:(NSUInteger)arg0 column:(NSUInteger)arg1 ;
-(id)initWithDictionaryObjects:(id)arg0 keys:(id)arg1 ;


@end


#endif