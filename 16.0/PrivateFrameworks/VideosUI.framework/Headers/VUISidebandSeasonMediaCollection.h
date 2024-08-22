// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUISIDEBANDSEASONMEDIACOLLECTION_H
#define VUISIDEBANDSEASONMEDIACOLLECTION_H



#import "VUIMediaCollection.h"
#import "VUITVSeasonManagedObject.h"

@interface VUISidebandSeasonMediaCollection : VUIMediaCollection

@property (retain, nonatomic) VUITVSeasonManagedObject *seasonManagedObject; // ivar: _seasonManagedObject


-(id)HLSColorCapability;
-(id)canonicalID;
-(id)colorCapability;
-(id)initWithMediaLibrary:(id)arg0 seasonManagedObject:(id)arg1 requestedProperties:(id)arg2 ;
-(id)isLocal;
-(id)seasonNumber;
-(id)showIdentifier;
-(id)title;


@end


#endif