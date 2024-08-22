// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMLISTUNSUBSCRIBECOMMAND_H
#define EMLISTUNSUBSCRIBECOMMAND_H

@class NSString;
@protocol NSSecureCoding, EFPubliclyDescribable;

#import <Foundation/Foundation.h>

#import "EMListUnsubscribeMailtoValues.h"
#import "EMListUnsubscribePostValues.h"

@interface EMListUnsubscribeCommand : NSObject <NSSecureCoding, EFPubliclyDescribable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger headerUnsubscribeTypes; // ivar: _headerUnsubscribeTypes
@property (readonly, nonatomic) BOOL isMailtoOperation;
@property (readonly, nonatomic) NSString *listID; // ivar: _listID
@property (readonly, nonatomic) EMListUnsubscribeMailtoValues *mailtoValues; // ivar: _mailtoValues
@property (readonly, nonatomic) EMListUnsubscribePostValues *postValues; // ivar: _postValues
@property (readonly, nonatomic) NSString *sender; // ivar: _sender
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_accountWithIdentifier:(id)arg0 ;
+(id)accountFinderBlock:(SEL)arg0 ;
+(id)mailtoUnsubscribeCommandWithListID:(id)arg0 address:(id)arg1 sender:(id)arg2 subject:(id)arg3 body:(id)arg4 account:(id)arg5 headerUnsubscribeTypes:(NSInteger)arg6 ;
+(id)oneClickUnsubscribeCommandWithListID:(id)arg0 sender:(id)arg1 URL:(id)arg2 postContent:(id)arg3 headerUnsubscribeTypes:(NSInteger)arg4 ;
+(void)setAccountFinderBlock:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithListID:(id)arg0 sender:(id)arg1 mailtoValues:(id)arg2 postValues:(id)arg3 headerUnsubscribeTypes:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif