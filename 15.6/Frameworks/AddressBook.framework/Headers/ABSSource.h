// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABSSOURCE_H
#define ABSSOURCE_H

@class NSString, CNAccount, CNMutableContainer;
@protocol ABSRecord;

#import <Foundation/Foundation.h>

#import "ABSAddressBook.h"
#import "ABSSource.h"

@interface ABSSource : NSObject <ABSRecord>



@property (readonly, nonatomic) NSString *CNIdentifierString;
@property (readonly, nonatomic) CNAccount *account; // ivar: _account
@property (weak, nonatomic) ABSAddressBook *addressBook; // ivar: _addressBook
@property (retain, nonatomic) CNMutableContainer *cnImpl; // ivar: _cnImpl
@property (readonly, nonatomic) NSString *compositeName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int id;
@property (nonatomic) int revertedRecordID; // ivar: _revertedRecordID
@property (weak, nonatomic) ABSSource *source; // ivar: _source
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int type;


+(void)initialize;
-(*void)copyValueForProperty:(int)arg0 ;
-(?)setValue:(?)arg0 forPropertywithError;
-(BOOL)removeProperty:(int)arg0 withError:(*id)arg1 ;
-(NSUInteger)_cfTypeID;
-(id)getAccount;
-(id)initWithMutableContainer:(id)arg0 ;
-(void)replaceRecordStorageWithCNObject:(id)arg0 ;
-(void)updateAllValuesWithValuesFromContainer:(id)arg0 ;


@end


#endif