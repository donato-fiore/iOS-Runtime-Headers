// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMFALLSTATSITEMSITERATOR_H
#define CMFALLSTATSITEMSITERATOR_H

@class NSData, NSDictionary;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface CMFallStatsItemsIterator : NSObject <NSFastEnumeration>

 {
    NSData *_data;
    NSDictionary *_item;
    Reader fMslReader;
    MemoryDelegate fMslReaderDelegate;
    ReaderIterator fMslIterator;
}




-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithData:(id)arg0 ;
-(void)dealloc;


@end


#endif