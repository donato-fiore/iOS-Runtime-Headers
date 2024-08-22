// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKTABLE_H
#define CRKTABLE_H

@class NSString;
@protocol CRKTableEntries;

#import <Foundation/Foundation.h>


@interface CRKTable : NSObject {
    id<CRKTableEntries> *mEntries;
}


@property (readonly, copy, nonatomic) NSString *stringValue;


+(id)parsableTableWithKeyValuePairs:(id)arg0 ;
+(id)tableWithHeaders:(id)arg0 keyPaths:(id)arg1 objects:(id)arg2 ;
-(NSUInteger)lengthOfLongestObjectInColumn:(NSUInteger)arg0 ;
-(id)columnLengths;
-(id)initWithEntries:(id)arg0 ;


@end


#endif