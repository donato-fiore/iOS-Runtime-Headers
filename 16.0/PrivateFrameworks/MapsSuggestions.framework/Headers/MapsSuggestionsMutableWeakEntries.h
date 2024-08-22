// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSMUTABLEWEAKENTRIES_H
#define MAPSSUGGESTIONSMUTABLEWEAKENTRIES_H

@class NSPointerArray, NSArray;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsMutableWeakEntries : NSObject {
    NSPointerArray *_array;
    BOOL _dirty;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSArray *strongArray;


-(id)init;
-(id)initWithEntries:(id)arg0 ;
-(void)addWeakObject:(id)arg0 ;


@end


#endif