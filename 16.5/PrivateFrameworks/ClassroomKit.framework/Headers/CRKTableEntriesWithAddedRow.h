// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKTABLEENTRIESWITHADDEDROW_H
#define CRKTABLEENTRIESWITHADDEDROW_H

@class NSArray, NSString;
@protocol CRKTableEntries;

#import <Foundation/Foundation.h>


@interface CRKTableEntriesWithAddedRow : NSObject <CRKTableEntries>

 {
    id<CRKTableEntries> *mOrigin;
    NSUInteger mIndex;
    NSArray *mEntries;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)columnCount;
-(NSUInteger)rowCount;
-(id)entryAtRow:(NSUInteger)arg0 column:(NSUInteger)arg1 ;
-(id)initWithOrigin:(id)arg0 index:(NSUInteger)arg1 entries:(id)arg2 ;


@end


#endif