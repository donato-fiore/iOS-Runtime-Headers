// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMBLOCKLISTITEM_H
#define IMBLOCKLISTITEM_H

@class NSString, CNContact;

#import <Foundation/Foundation.h>

#import "IMBlockListPerson.h"

@interface IMBlockListItem : NSObject

@property (retain, nonatomic) NSString *address; // ivar: _address
@property (retain, nonatomic) NSString *cachedFormattedHandle; // ivar: _cachedFormattedHandle
@property (retain, nonatomic) NSString *cachedFormattedPersonName; // ivar: _cachedFormattedPersonName
@property (nonatomic) *void cmfItem; // ivar: _cmfItem
@property (readonly, nonatomic) CNContact *cnPerson;
@property (retain, nonatomic) IMBlockListPerson *person; // ivar: _person


-(BOOL)isEqualToBlockListItem:(id)arg0 ;
-(id)formattedAddress;
-(id)formattedHandle;
-(id)fullName;
-(id)initWithCNContact:(id)arg0 address:(id)arg1 cmfItemRef:(*void)arg2 ;
-(id)initWithPerson:(id)arg0 address:(id)arg1 cmfItemRef:(*void)arg2 ;
-(void)dealloc;
-(void)lookupPerson;


@end


#endif