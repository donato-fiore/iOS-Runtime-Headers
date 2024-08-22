// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ML3MULTIUSERDAEMONACCOUNTCHANGEOPERATION_H
#define _ML3MULTIUSERDAEMONACCOUNTCHANGEOPERATION_H

@class MSVAsyncOperation, NSString;
@protocol MLMediaLibraryAccountChangeObserver, _ML3MultiUserDaemonAccountChangeOperationDelegate;



@interface _ML3MultiUserDaemonAccountChangeOperation : MSVAsyncOperation

@property (retain, nonatomic) NSObject<MLMediaLibraryAccountChangeObserver> *accountChangeObserver; // ivar: _accountChangeObserver
@property (weak, nonatomic) NSObject<_ML3MultiUserDaemonAccountChangeOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *finalDSID; // ivar: _finalDSID
@property (readonly, copy, nonatomic) NSString *initialDSID; // ivar: _initialDSID


-(id)initWithInitialDSID:(id)arg0 finalDSID:(id)arg1 accountChangeObserver:(id)arg2 ;
-(void)execute;


@end


#endif