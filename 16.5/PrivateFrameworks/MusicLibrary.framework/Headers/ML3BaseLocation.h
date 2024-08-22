// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3BASELOCATION_H
#define ML3BASELOCATION_H



#import "ML3Entity.h"

@interface ML3BaseLocation : ML3Entity



+(BOOL)insertionChangesLibraryContents;
+(id)databaseTable;
+(id)newWithDictionary:(id)arg0 inLibrary:(id)arg1 ;
-(void)enumerateOrphanedAssetsUsingBlock:(id)arg0 ;


@end


#endif