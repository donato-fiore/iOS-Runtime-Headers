// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDCOLUMNINFOCOLLECTION_H
#define EDCOLUMNINFOCOLLECTION_H



#import "EDSortedCollection.h"
#import "EDResources.h"
#import "EDWorksheet.h"

@interface EDColumnInfoCollection : EDSortedCollection {
    EDResources *mResources;
    EDWorksheet *mWorksheet;
}




-(id)columnInfoCreateIfNilForColumnNumber:(int)arg0 ;
-(id)columnInfoForColumnNumber:(int)arg0 ;
-(id)initWithResources:(id)arg0 worksheet:(id)arg1 ;


@end


#endif