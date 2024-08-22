// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKLISTTABLEENTRIES_H
#define CRKLISTTABLEENTRIES_H

@class NSArray, NSString;
@protocol CRKTableEntries;

#import <Foundation/Foundation.h>


@interface CRKListTableEntries : NSObject <CRKTableEntries>

 {
    NSArray *mArray;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)columnCount;
-(NSUInteger)rowCount;
-(id)entryAtRow:(NSUInteger)arg0 column:(NSUInteger)arg1 ;
-(id)initWithArray:(id)arg0 ;


@end


#endif