// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELLIBRARYRESPONSE_H
#define MPMODELLIBRARYRESPONSE_H

@class NSString, NSArray;
@protocol MPModelResponseDetailedKeepLocalStatusRequesting;


#import "MPModelResponse.h"
#import "MPMediaLibraryConnectionAssertion.h"

@interface MPModelLibraryResponse : MPModelResponse <MPModelResponseDetailedKeepLocalStatusRequesting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPMediaLibraryConnectionAssertion *libraryAssertion; // ivar: _libraryAssertion
@property (copy, nonatomic) NSArray *sectionKeepLocalStatusConfigurations; // ivar: _sectionKeepLocalStatusConfigurations
@property (readonly) Class superclass;


-(id)initWithRequest:(id)arg0 ;
-(id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(NSInteger)arg0 responseHandler:(id)arg1 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif