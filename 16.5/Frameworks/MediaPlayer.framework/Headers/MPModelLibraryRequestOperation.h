// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELLIBRARYREQUESTOPERATION_H
#define MPMODELLIBRARYREQUESTOPERATION_H



#import "MPAsyncOperation.h"
#import "MPModelLibraryRequest.h"

@interface MPModelLibraryRequestOperation : MPAsyncOperation

@property (copy, nonatomic) MPModelLibraryRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(id)_itemProperties;
-(id)_libraryView;
-(id)_sectionProperties;
-(void)_executeLegacyRequest;
-(void)_executeNewRequest;
-(void)_insertPropertyCacheForEntityPID:(NSInteger)arg0 entityClass:(*void)arg1 entityTranslator:(id)arg2 translationContext:(id)arg3 propertyCachesVector:(*void)arg4 ;
-(void)_sanityCheckRequest;
-(void)execute;


@end


#endif