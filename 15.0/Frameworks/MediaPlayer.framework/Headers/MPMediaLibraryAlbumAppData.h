// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIALIBRARYALBUMAPPDATA_H
#define MPMEDIALIBRARYALBUMAPPDATA_H

@class NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MPMediaLibraryAlbumAppData : NSObject {
    NSDictionary *_appDataDict;
    NSMutableDictionary *_dirtyPopularityDict;
}


@property (readonly, nonatomic) NSInteger version; // ivar: _version


-(id)createAppDataDictionary;
-(id)init;
-(id)initWithAppDataDictionary:(id)arg0 ;
-(id)songPopularityForAdamID:(NSInteger)arg0 ;
-(id)songPopularityForIdentifiers:(id)arg0 ;
-(void)setSongPopularity:(id)arg0 forAdamID:(NSInteger)arg1 ;
-(void)setSongPopularity:(id)arg0 forIdentifierSet:(id)arg1 ;


@end


#endif