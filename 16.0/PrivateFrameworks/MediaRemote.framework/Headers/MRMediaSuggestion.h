// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRMEDIASUGGESTION_H
#define MRMEDIASUGGESTION_H

@class NSString, INMediaItem, INPlayMediaIntent;

#import <Foundation/Foundation.h>

#import "MRArtwork.h"

@interface MRMediaSuggestion : NSObject {
    NSString *_bundleID;
    MRArtwork *_artwork;
    INMediaItem *_container;
    INPlayMediaIntent *_intent;
}


@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) MRArtwork *artwork;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIntent:(id)arg0 ;
-(void)playOnDeviceWithUID:(id)arg0 completion:(id)arg1 ;
-(void)playOnEndpoint:(id)arg0 completion:(id)arg1 ;
-(void)playWithCompletion:(id)arg0 ;


@end


#endif