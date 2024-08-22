// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSSYNCSTATESDICT_H
#define NMSSYNCSTATESDICT_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NMSSyncStatesDict : NSObject <NSCopying>

 {
    NSMutableDictionary *_syncStatesDict;
    NSMutableDictionary *_waitingSubstatesDict;
}




+(NSUInteger)mediaTypeForAssetType:(id)arg0 ;
+(id)assetTypeForMediaType:(NSUInteger)arg0 ;
-(NSUInteger)syncStateForMediaType:(NSUInteger)arg0 ;
-(NSUInteger)waitingSubstateForMediaType:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)syncStateDictionaryRepresentation;
-(id)waitingSubstateDictionaryRepresentation;
-(void)setSyncState:(NSUInteger)arg0 forMediaType:(NSUInteger)arg1 ;
-(void)setSyncStateForAllMediaTypes:(NSUInteger)arg0 ;
-(void)setWaitingSubstate:(NSUInteger)arg0 forMediaType:(NSUInteger)arg1 ;
-(void)setWaitingSubstateForAllMediaTypes:(NSUInteger)arg0 ;


@end


#endif