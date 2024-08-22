// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPITUNESMEDIALOOKUPITEMARTWORK_H
#define LPITUNESMEDIALOOKUPITEMARTWORK_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface LPiTunesMediaLookupItemArtwork : NSObject {
    NSDictionary *_dictionary;
}


@property (readonly, nonatomic) NSInteger height;
@property (readonly, nonatomic) NSInteger width;


+(id)colorForColorKind:(id)arg0 inColorDictionary:(id)arg1 ;
-(id)URLWithHeight:(NSInteger)arg0 width:(NSInteger)arg1 cropStyle:(id)arg2 format:(id)arg3 ;
-(id)colors;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif