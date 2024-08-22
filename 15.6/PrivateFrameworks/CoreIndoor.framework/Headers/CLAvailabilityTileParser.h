// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLAVAILABILITYTILEPARSER_H
#define CLAVAILABILITYTILEPARSER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface CLAvailabilityTileParser : NSObject {
    shared_ptr<AvailabilityTile> _avlTile;
}


@property (readonly, nonatomic) NSURL *path; // ivar: _path


+(BOOL)generateAvlTileFromJSON:(id)arg0 atPath:(id)arg1 ;
+(void)_setParamOverrides:(struct LocalizerParameters *)arg0 fromDict:(id)arg1 ;
-(*void)getAvlTile;
-(BOOL)_openTileFileForIncrementalIO;
-(BOOL)getNextVenueBoundsIncrementally:(*void)arg0 ;
-(BOOL)tileIsOpenForIncrementalIO;
-(NSUInteger)venuesCount;
-(id)init;
-(id)initWithEmptyTile;
-(id)initWithTilePathIncrementalIO:(id)arg0 ;
-(int)numTotalExpectedExteriorsInVenues;
-(int)numVenuesExpected;


@end


#endif