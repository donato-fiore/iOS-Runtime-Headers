// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPMEDIALIBRARYARTWORKVISUALIDENTICALITYIDENTIFIER_H
#define _MPMEDIALIBRARYARTWORKVISUALIDENTICALITYIDENTIFIER_H

@class NSString;
@protocol MPArtworkDataSourceVisualIdenticality;

#import <Foundation/Foundation.h>


@interface _MPMediaLibraryArtworkVisualIdenticalityIdentifier : NSObject <MPArtworkDataSourceVisualIdenticality>



@property (readonly, nonatomic) NSInteger artworkType; // ivar: _artworkType
@property (readonly, nonatomic) NSString *availableArtworkToken; // ivar: _availableArtworkToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *fetchableArtworkToken; // ivar: _fetchableArtworkToken
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithArtworkType:(NSInteger)arg0 availableArtworkToken:(id)arg1 fetchableArtworkToken:(id)arg2 ;
-(id)stringRepresentation;


@end


#endif