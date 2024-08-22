// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKTABLEENTRIESWITHROWSPACER_H
#define CRKTABLEENTRIESWITHROWSPACER_H

@class NSString;
@protocol CRKTableEntries, CRKTableEntry;

#import <Foundation/Foundation.h>


@interface CRKTableEntriesWithRowSpacer : NSObject <CRKTableEntries>

 {
    id<CRKTableEntries> *mOrigin;
    NSUInteger mIndex;
    id<CRKTableEntry> *mSpacerEntry;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)columnCount;
-(NSUInteger)rowCount;
-(id)entryAtRow:(NSUInteger)arg0 column:(NSUInteger)arg1 ;
-(id)initWithOrigin:(id)arg0 index:(NSUInteger)arg1 spacerEntry:(id)arg2 ;


@end


#endif