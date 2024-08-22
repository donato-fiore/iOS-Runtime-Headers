// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3ARTWORK_H
#define ML3ARTWORK_H

@class NSString, NSDictionary, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ML3MusicLibrary.h"

@interface ML3Artwork : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly, nonatomic) NSString *artworkToken; // ivar: _artworkToken
@property (readonly, nonatomic) NSInteger artworkType; // ivar: _artworkType
@property (retain, nonatomic) NSDictionary *interestDictionary; // ivar: _interestDictionary
@property (readonly, nonatomic) ML3MusicLibrary *musicLibrary; // ivar: _musicLibrary
@property (readonly, nonatomic) NSURL *originalFileURL; // ivar: _originalFileURL
@property (readonly, nonatomic) NSString *relativePath; // ivar: _relativePath
@property (readonly, nonatomic) NSInteger sourceType; // ivar: _sourceType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_interestDataFromInterestDictionary:(id)arg0 ;
-(id)_interestDictionaryFromInterestData:(id)arg0 ;
-(id)fileURLForEffect:(id)arg0 ;
-(id)fileURLForSize:(struct CGSize )arg0 ;
-(id)initWithToken:(id)arg0 artworkType:(NSInteger)arg1 musicLibrary:(id)arg2 ;
-(id)initWithToken:(id)arg0 relativePath:(id)arg1 artworkType:(NSInteger)arg2 musicLibrary:(id)arg3 ;
-(void)_onSerialQueue_faultInProperties;


@end


#endif