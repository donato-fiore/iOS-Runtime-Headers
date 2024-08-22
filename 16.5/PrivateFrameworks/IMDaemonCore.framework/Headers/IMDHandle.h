// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDHANDLE_H
#define IMDHANDLE_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface IMDHandle : NSObject

@property (copy, nonatomic) NSString *CNContactID; // ivar: _CNContactID
@property (retain, nonatomic) NSString *ID; // ivar: _id
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, retain, nonatomic) NSDictionary *handleInfo;
@property (retain, nonatomic) NSString *personCentricID; // ivar: _personCentricID
@property (retain, nonatomic) NSString *unformattedID; // ivar: _unformattedID


-(BOOL)isBetterDefinedThan:(id)arg0 ;
-(BOOL)isBusiness;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isStewie;
-(NSInteger)compareIDs:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithID:(id)arg0 unformattedID:(id)arg1 countryCode:(id)arg2 ;
-(id)initWithID:(id)arg0 unformattedID:(id)arg1 countryCode:(id)arg2 personCentricID:(id)arg3 ;
-(void)dealloc;


@end


#endif