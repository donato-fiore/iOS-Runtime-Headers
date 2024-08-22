// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHLOUVAINCLUSTERQUERY_H
#define SHLOUVAINCLUSTERQUERY_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface SHLouvainClusterQuery : NSObject

@property (retain, nonatomic) NSManagedObjectContext *moc; // ivar: _moc


-(id)initWithContext:(id)arg0 ;
-(id)pathString:(id)arg0 ofLength:(NSInteger)arg1 ;
-(id)tracksAtCohesionLevel:(NSInteger)arg0 forQueryTracks:(id)arg1 filteredBy:(id)arg2 ;
-(id)tracksAtLevel:(NSInteger)arg0 forQueryTracks:(id)arg1 filteredBy:(id)arg2 ;
-(id)validPrefixesForTracks:(id)arg0 ofLength:(NSInteger)arg1 ;


@end


#endif