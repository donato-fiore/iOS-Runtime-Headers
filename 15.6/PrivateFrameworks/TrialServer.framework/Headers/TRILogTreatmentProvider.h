// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRILOGTREATMENTPROVIDER_H
#define TRILOGTREATMENTPROVIDER_H

@class TRILogTreatmentReader;



@interface TRILogTreatmentProvider : TRILogTreatmentReader



+(BOOL)deleteFileAtPath:(id)arg0 ;
+(id)providerWithProjectId:(int)arg0 paths:(id)arg1 ;
-(BOOL)addTreatment:(id)arg0 ;
-(BOOL)saveTreatments:(id)arg0 ;
-(void)removeTreatment:(id)arg0 ;
-(void)updatePersistedLogNamespace:(id)arg0 ;


@end


#endif