// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGTRIALSESSION_H
#define PGTRIALSESSION_H

@class TRIClient;

#import <Foundation/Foundation.h>


@interface PGTrialSession : NSObject

@property (retain, nonatomic) TRIClient *trialClient; // ivar: _trialClient


+(id)newTrialSession;
-(id)arrayForFactorName:(id)arg0 withNamespaceType:(unsigned short)arg1 ;
-(id)dictionaryForFactorName:(id)arg0 withNamespaceType:(unsigned short)arg1 ;
-(id)init;
-(id)levelForFactorName:(id)arg0 withNamespaceType:(unsigned short)arg1 ;
-(id)namespaceNameForNamespaceType:(unsigned short)arg0 ;


@end


#endif