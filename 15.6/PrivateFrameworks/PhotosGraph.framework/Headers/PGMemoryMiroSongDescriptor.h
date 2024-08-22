// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEMORYMIROSONGDESCRIPTOR_H
#define PGMEMORYMIROSONGDESCRIPTOR_H

@class NSString, NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface PGMemoryMiroSongDescriptor : NSObject

@property (readonly, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, nonatomic) NSDictionary *diagnosticsDictionary;
@property (readonly, nonatomic) NSSet *genres; // ivar: _genres
@property (readonly, nonatomic) NSUInteger mood; // ivar: _mood
@property (readonly, nonatomic) NSInteger musicType; // ivar: _musicType
@property (readonly, nonatomic) id *songIdentifier; // ivar: _songIdentifier
@property (readonly, nonatomic) NSString *songTitle; // ivar: _songTitle


-(id)description;
-(id)initWithMemory:(id)arg0 ;


@end


#endif