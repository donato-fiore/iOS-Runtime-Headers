// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ML3MULTIUSERACCOUNTCHANGEOPERATION_H
#define _ML3MULTIUSERACCOUNTCHANGEOPERATION_H

@class MSVAsyncOperation, NSString;
@protocol MLMediaLibraryAccountChangeObserver;



@interface _ML3MultiUserAccountChangeOperation : MSVAsyncOperation

@property (weak, nonatomic) NSObject<MLMediaLibraryAccountChangeObserver> *accountChangeObserver; // ivar: _accountChangeObserver
@property (readonly, copy, nonatomic) NSString *databasePath; // ivar: _databasePath


-(id)initWithDatabasePath:(id)arg0 accountChangeObserver:(id)arg1 ;
-(void)execute;


@end


#endif