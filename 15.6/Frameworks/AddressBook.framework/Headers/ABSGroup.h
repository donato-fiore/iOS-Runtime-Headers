// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABSGROUP_H
#define ABSGROUP_H

@class NSString, CNMutableGroup;
@protocol ABSRecord;

#import <Foundation/Foundation.h>

#import "ABSAddressBook.h"
#import "ABSSource.h"

@interface ABSGroup : NSObject <ABSRecord>



@property (readonly, nonatomic) NSString *CNIdentifierString;
@property (weak, nonatomic) ABSAddressBook *addressBook; // ivar: _addressBook
@property (retain, nonatomic) CNMutableGroup *cnImpl; // ivar: _cnImpl
@property (readonly, nonatomic) NSString *compositeName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int id;
@property (nonatomic) int revertedRecordID; // ivar: _revertedRecordID
@property (weak, nonatomic) ABSSource *source; // ivar: _source
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int type;


+(id)propertyKeyForPropertyID:(int)arg0 ;
+(void)initialize;
-(*void)copyValueForProperty:(int)arg0 ;
-(?)setValue:(?)arg0 forPropertywithError;
-(BOOL)removeProperty:(int)arg0 withError:(*id)arg1 ;
-(NSUInteger)_cfTypeID;
-(id)init;
-(id)initWithMutableGroup:(id)arg0 ;
-(id)initWithSource:(id)arg0 ;
-(void)replaceRecordStorageWithCNObject:(id)arg0 ;
-(void)updateAllValuesWithValuesFromGroup:(id)arg0 ;


@end


#endif