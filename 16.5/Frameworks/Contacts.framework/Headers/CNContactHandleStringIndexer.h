// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTHANDLESTRINGINDEXER_H
#define CNCONTACTHANDLESTRINGINDEXER_H

@class NSDictionary, CNCache, NSArray;

#import <Foundation/Foundation.h>


@interface CNContactHandleStringIndexer : NSObject

@property (readonly, nonatomic) NSDictionary *index;
@property (readonly, nonatomic) CNCache *indexImpl; // ivar: _indexImpl
@property (readonly, nonatomic) NSArray *targetHandleStrings; // ivar: _targetHandleStrings


+(id)indexByMatchingIndexWithRawHandles:(id)arg0 toTargetHandleStrings:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithTargetHandleStrings:(id)arg0 ;
-(void)indexContact:(id)arg0 ;
-(void)indexContacts:(id)arg0 ;
-(void)indexEmailAddressesOnContact:(id)arg0 ;
-(void)indexPhoneNumbersOnContact:(id)arg0 ;


@end


#endif