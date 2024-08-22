// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASAOBJECT_H
#define ASAOBJECT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ASAObject : NSObject

@property (readonly, nonatomic) unsigned int baseClass;
@property (readonly, nonatomic) unsigned int objectClass;
@property (readonly, nonatomic) unsigned int objectID; // ivar: _objectID
@property (readonly, copy, nonatomic) NSArray *ownedObjectIDs;
@property (readonly, nonatomic) unsigned int ownerID;


-(BOOL)getGlobalProperty:(unsigned int)arg0 ofElement:(unsigned int)arg1 withData:(*void)arg2 ofSize:(*unsigned int)arg3 withQualifier:(*void)arg4 ofSize:(unsigned int)arg5 ;
-(BOOL)getInputProperty:(unsigned int)arg0 ofElement:(unsigned int)arg1 withData:(*void)arg2 ofSize:(*unsigned int)arg3 withQualifier:(*void)arg4 ofSize:(unsigned int)arg5 ;
-(BOOL)getMasterGlobalProperty:(unsigned int)arg0 withData:(*void)arg1 ofSize:(*unsigned int)arg2 withQualifier:(*void)arg3 ofSize:(unsigned int)arg4 ;
-(BOOL)getMasterInputProperty:(unsigned int)arg0 withData:(*void)arg1 ofSize:(*unsigned int)arg2 withQualifier:(*void)arg3 ofSize:(unsigned int)arg4 ;
-(BOOL)getMasterOutputProperty:(unsigned int)arg0 withData:(*void)arg1 ofSize:(*unsigned int)arg2 withQualifier:(*void)arg3 ofSize:(unsigned int)arg4 ;
-(BOOL)getOutputProperty:(unsigned int)arg0 ofElement:(unsigned int)arg1 withData:(*void)arg2 ofSize:(*unsigned int)arg3 withQualifier:(*void)arg4 ofSize:(unsigned int)arg5 ;
-(BOOL)getProperty:(unsigned int)arg0 scope:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(*void)arg3 ofSize:(*unsigned int)arg4 withQualifier:(*void)arg5 ofSize:(unsigned int)arg6 ;
-(BOOL)hasGlobalProperty:(unsigned int)arg0 ofElement:(unsigned int)arg1 ;
-(BOOL)hasInputProperty:(unsigned int)arg0 ofElement:(unsigned int)arg1 ;
-(BOOL)hasMasterGlobalProperty:(unsigned int)arg0 ;
-(BOOL)hasMasterInputProperty:(unsigned int)arg0 ;
-(BOOL)hasMasterOutputProperty:(unsigned int)arg0 ;
-(BOOL)hasOutputProperty:(unsigned int)arg0 ofElement:(unsigned int)arg1 ;
-(BOOL)hasProperty:(unsigned int)arg0 scope:(unsigned int)arg1 ofElement:(unsigned int)arg2 ;
-(BOOL)isGlobalPropertySettable:(unsigned int)arg0 ofElement:(unsigned int)arg1 ;
-(BOOL)isInputPropertySettable:(unsigned int)arg0 ofElement:(unsigned int)arg1 ;
-(BOOL)isMasterGlobalPropertySettable:(unsigned int)arg0 ;
-(BOOL)isMasterInputPropertySettable:(unsigned int)arg0 ;
-(BOOL)isMasterOutputPropertySettable:(unsigned int)arg0 ;
-(BOOL)isOutputPropertySettable:(unsigned int)arg0 ofElement:(unsigned int)arg1 ;
-(BOOL)isPropertySettable:(unsigned int)arg0 scope:(unsigned int)arg1 ofElement:(unsigned int)arg2 ;
-(BOOL)onQueue:(id)arg0 forGlobalProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 addListener:(id)arg3 ;
-(BOOL)onQueue:(id)arg0 forGlobalProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 removeListener:(id)arg3 ;
-(BOOL)onQueue:(id)arg0 forInputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 addListener:(id)arg3 ;
-(BOOL)onQueue:(id)arg0 forInputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 removeListener:(id)arg3 ;
-(BOOL)onQueue:(id)arg0 forMasterGlobalProperty:(unsigned int)arg1 addListener:(id)arg2 ;
-(BOOL)onQueue:(id)arg0 forMasterGlobalProperty:(unsigned int)arg1 removeListener:(id)arg2 ;
-(BOOL)onQueue:(id)arg0 forMasterInputProperty:(unsigned int)arg1 addListener:(id)arg2 ;
-(BOOL)onQueue:(id)arg0 forMasterInputProperty:(unsigned int)arg1 removeListener:(id)arg2 ;
-(BOOL)onQueue:(id)arg0 forMasterOutputProperty:(unsigned int)arg1 addListener:(id)arg2 ;
-(BOOL)onQueue:(id)arg0 forMasterOutputProperty:(unsigned int)arg1 removeListener:(id)arg2 ;
-(BOOL)onQueue:(id)arg0 forOutputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 addListener:(id)arg3 ;
-(BOOL)onQueue:(id)arg0 forOutputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 removeListener:(id)arg3 ;
-(BOOL)onQueue:(id)arg0 forProperty:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3 addListener:(id)arg4 ;
-(BOOL)onQueue:(id)arg0 forProperty:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3 removeListener:(id)arg4 ;
-(BOOL)setGlobalProperty:(unsigned int)arg0 ofElement:(unsigned int)arg1 withData:(*void)arg2 ofSize:(unsigned int)arg3 withQualifier:(*void)arg4 ofSize:(unsigned int)arg5 ;
-(BOOL)setInputProperty:(unsigned int)arg0 ofElement:(unsigned int)arg1 withData:(*void)arg2 ofSize:(unsigned int)arg3 withQualifier:(*void)arg4 ofSize:(unsigned int)arg5 ;
-(BOOL)setMasterGlobalProperty:(unsigned int)arg0 withData:(*void)arg1 ofSize:(unsigned int)arg2 withQualifier:(*void)arg3 ofSize:(unsigned int)arg4 ;
-(BOOL)setMasterInputProperty:(unsigned int)arg0 withData:(*void)arg1 ofSize:(unsigned int)arg2 withQualifier:(*void)arg3 ofSize:(unsigned int)arg4 ;
-(BOOL)setMasterOutputProperty:(unsigned int)arg0 withData:(*void)arg1 ofSize:(unsigned int)arg2 withQualifier:(*void)arg3 ofSize:(unsigned int)arg4 ;
-(BOOL)setOutputProperty:(unsigned int)arg0 ofElement:(unsigned int)arg1 withData:(*void)arg2 ofSize:(unsigned int)arg3 withQualifier:(*void)arg4 ofSize:(unsigned int)arg5 ;
-(BOOL)setProperty:(unsigned int)arg0 scope:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(*void)arg3 ofSize:(unsigned int)arg4 withQualifier:(*void)arg5 ofSize:(unsigned int)arg6 ;
-(id)coreAudioClassName;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)init;
-(id)initWithAudioObjectID:(unsigned int)arg0 ;
-(unsigned int)sizeOfGlobalProperty:(unsigned int)arg0 ofElement:(unsigned int)arg1 withQualifier:(*void)arg2 ofSize:(unsigned int)arg3 ;
-(unsigned int)sizeOfInputProperty:(unsigned int)arg0 ofElement:(unsigned int)arg1 withQualifier:(*void)arg2 ofSize:(unsigned int)arg3 ;
-(unsigned int)sizeOfMasterGlobalProperty:(unsigned int)arg0 withQualifier:(*void)arg1 ofSize:(unsigned int)arg2 ;
-(unsigned int)sizeOfMasterInputProperty:(unsigned int)arg0 withQualifier:(*void)arg1 ofSize:(unsigned int)arg2 ;
-(unsigned int)sizeOfMasterOutputProperty:(unsigned int)arg0 withQualifier:(*void)arg1 ofSize:(unsigned int)arg2 ;
-(unsigned int)sizeOfOutputProperty:(unsigned int)arg0 ofElement:(unsigned int)arg1 withQualifier:(*void)arg2 ofSize:(unsigned int)arg3 ;
-(unsigned int)sizeOfProperty:(unsigned int)arg0 scope:(unsigned int)arg1 ofElement:(unsigned int)arg2 withQualifier:(*void)arg3 ofSize:(unsigned int)arg4 ;


@end


#endif