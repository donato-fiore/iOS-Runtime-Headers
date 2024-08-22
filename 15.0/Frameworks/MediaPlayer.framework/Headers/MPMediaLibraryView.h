// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIALIBRARYVIEW_H
#define MPMEDIALIBRARYVIEW_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPMediaLibrary.h"

@interface MPMediaLibraryView : NSObject <NSCopying>

 {
    shared_ptr<mlcore::DeviceLibraryView> _coreView;
}


@property (readonly, nonatomic) NSUInteger filteringOptions; // ivar: _filteringOptions
@property (readonly, nonatomic) MPMediaLibrary *library; // ivar: _library
@property (readonly, nonatomic) shared_ptr<mlcore::DeviceLibraryView> mlCoreView;


-(?)performCoreQuerywithCompletion;
-(BOOL)hasEntitiesForModelKind:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLibrary:(id)arg0 filteringOptions:(NSUInteger)arg1 ;
-(struct shared_ptr<mlcore::QueryResult> )_performCoreQuery:(struct shared_ptr<mlcore::Query> )arg0 error:(*id)arg1 ;
-(void)performCoreSearchQuery:(struct shared_ptr<mlcore::LocalizedSearchQuery> )arg0 withCompletion:(id)arg1 ;


@end


#endif