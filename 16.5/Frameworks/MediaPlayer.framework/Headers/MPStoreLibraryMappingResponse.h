// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSTORELIBRARYMAPPINGRESPONSE_H
#define MPSTORELIBRARYMAPPINGRESPONSE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MPStoreLibraryMappingResponse : NSObject {
    NSMutableDictionary *_storeIdentifierSetToLibraryIdentifierSet;
}


@property (nonatomic) NSInteger libraryAddedStatus; // ivar: _libraryAddedStatus


-(id)libraryIdentifierSetForIdentifierSet:(id)arg0 ;
-(void)setLibraryIdentifierSet:(id)arg0 forIdentifierSet:(id)arg1 ;


@end


#endif