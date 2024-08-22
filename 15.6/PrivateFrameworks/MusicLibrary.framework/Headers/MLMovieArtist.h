// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLMOVIEARTIST_H
#define MLMOVIEARTIST_H

@class NSMutableDictionary, NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLMovieArtist : NSObject <NSCopying>

 {
    NSMutableDictionary *_dictionary;
}


@property (copy, nonatomic) NSNumber *ITunesStoreIdentifier;
@property (copy, nonatomic) NSString *artistName;


-(id)copyMovieArtistDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMovieArtistDictionary:(id)arg0 ;
-(void)_setValue:(id)arg0 forKey:(id)arg1 ;
-(void)_setValueCopy:(id)arg0 forKey:(id)arg1 ;


@end


#endif