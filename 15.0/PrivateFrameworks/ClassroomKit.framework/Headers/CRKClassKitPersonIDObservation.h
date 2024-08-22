// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCLASSKITPERSONIDOBSERVATION_H
#define CRKCLASSKITPERSONIDOBSERVATION_H

@protocol CRKClassKitFacade, CRKClassKitDataObserver;

#import <Foundation/Foundation.h>


@interface CRKClassKitPersonIDObservation : NSObject

@property (readonly, nonatomic) NSObject<CRKClassKitFacade> *classKitFacade; // ivar: _classKitFacade
@property (retain, nonatomic) NSObject<CRKClassKitDataObserver> *dataObserver; // ivar: _dataObserver


-(id)initWithPersonIDs:(id)arg0 classKitFacade:(id)arg1 block:(id)arg2 ;
-(void)cancel;
-(void)dealloc;


@end


#endif