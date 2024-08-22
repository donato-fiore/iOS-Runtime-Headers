// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOREERRORINFORMATION_H
#define SUCOREERRORINFORMATION_H

@class NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUCoreErrorInformation : NSObject

@property (readonly, nonatomic) NSMutableDictionary *errorInformation; // ivar: _errorInformation
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *informationQueue; // ivar: _informationQueue
@property (readonly, nonatomic) NSMutableDictionary *layerInformation; // ivar: _layerInformation
@property (readonly, nonatomic) NSArray *safeUserInfoValues; // ivar: _safeUserInfoValues


+(NSInteger)allIndicationsForError:(id)arg0 ;
+(NSInteger)indicationsForError:(id)arg0 matchingMask:(NSInteger)arg1 ;
+(NSInteger)layerForError:(id)arg0 ;
+(id)codeNameForDomain:(id)arg0 withCode:(NSInteger)arg1 ;
+(id)codeNameForError:(id)arg0 ;
+(id)nameForSUCoreCode:(NSInteger)arg0 ;
+(id)nameForSUCoreLayer:(NSInteger)arg0 ;
+(id)safeUserInfoValueClasses;
+(id)setupCoreErrorInformation;
+(id)sharedErrorInformation;
+(id)summaryOfIndications:(NSInteger)arg0 ;
+(void)associateLayer:(NSInteger)arg0 withDomain:(id)arg1 ;
+(void)associateLayer:(NSInteger)arg0 withDomain:(id)arg1 indicating:(NSInteger)arg2 ifKeyTrue:(id)arg3 ;
+(void)associateLayer:(NSInteger)arg0 withDomain:(id)arg1 keyMatchTrueMap:(id)arg2 ;
+(void)associateLayer:(NSInteger)arg0 withDomain:(id)arg1 minCode:(NSInteger)arg2 maxCode:(NSInteger)arg3 ;
+(void)associateLayer:(NSInteger)arg0 withDomain:(id)arg1 minCode:(NSInteger)arg2 maxCode:(NSInteger)arg3 indicating:(NSInteger)arg4 ifKeyTrue:(id)arg5 keyMatchTrueMap:(id)arg6 ;
+(void)attributesOfErrorForDomain:(id)arg0 withCode:(NSInteger)arg1 codeName:(id)arg2 ;
+(void)attributesOfErrorForDomain:(id)arg0 withCode:(NSInteger)arg1 codeName:(id)arg2 indicating:(NSInteger)arg3 ;
+(void)attributesOfErrorForDomain:(id)arg0 withCode:(NSInteger)arg1 codeName:(id)arg2 indicating:(NSInteger)arg3 ifKeyTrue:(id)arg4 ;
+(void)attributesOfErrorForDomain:(id)arg0 withCode:(NSInteger)arg1 codeName:(id)arg2 indicating:(NSInteger)arg3 ifKeyTrue:(id)arg4 keyMatchTrueMap:(id)arg5 ;
+(void)attributesOfErrorForDomain:(id)arg0 withCode:(NSInteger)arg1 codeName:(id)arg2 keyMatchTrueMap:(id)arg3 ;
+(void)attributesOfSUCoreErrorCode:(NSInteger)arg0 indicating:(NSInteger)arg1 ;
-(id)init;
-(void)_associateLayer:(NSInteger)arg0 withDomain:(id)arg1 minCode:(NSInteger)arg2 maxCode:(NSInteger)arg3 ;
-(void)_associateLayer:(NSInteger)arg0 withDomain:(id)arg1 minCode:(NSInteger)arg2 maxCode:(NSInteger)arg3 indicating:(NSInteger)arg4 ifKeyTrue:(id)arg5 keyMatchTrueMap:(id)arg6 ;
-(void)_attributesOfErrorForDomain:(id)arg0 withCode:(NSInteger)arg1 codeName:(id)arg2 indicating:(NSInteger)arg3 ifKeyTrue:(id)arg4 keyMatchTrueMap:(id)arg5 ;
-(void)_defineErrorLayers;


@end


#endif