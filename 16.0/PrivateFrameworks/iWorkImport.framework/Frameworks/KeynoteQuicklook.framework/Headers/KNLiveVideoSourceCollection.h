// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNLIVEVIDEOSOURCECOLLECTION_H
#define KNLIVEVIDEOSOURCECOLLECTION_H

@class TSPObject, NSArray, NSSet;


#import "KNLiveVideoSource.h"

@interface KNLiveVideoSourceCollection : TSPObject {
    NSArray *_sources;
}


@property (readonly, nonatomic) KNLiveVideoSource *defaultSource; // ivar: _defaultSource
@property (readonly, nonatomic) NSSet *sources;


+(BOOL)needsObjectUUID;
+(id)localizedDefaultSourceNameForLocale:(id)arg0 ;
+(id)p_makeDefaultSourceWithContext:(id)arg0 ;
-(BOOL)canRemoveSource:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)p_orderedSources;
-(id)p_uniqueNameForSource:(id)arg0 proposedName:(id)arg1 ;
-(id)sourceWithObjectUUID:(id)arg0 ;
-(id)uniqueNameForSource:(id)arg0 proposedName:(id)arg1 ;
-(id)uniqueNameForSourceWithProposedName:(id)arg0 ;
-(void)addSource:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)removeSource:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif