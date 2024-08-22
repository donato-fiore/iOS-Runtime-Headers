// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVCARDNAMECOMPONENTS_H
#define CNVCARDNAMECOMPONENTS_H

@class NSString;
@protocol CNVCardNameDataSource;

#import <Foundation/Foundation.h>


@interface CNVCardNameComponents : NSObject <CNVCardNameDataSource>



@property (readonly) NSString *companyName; // ivar: _companyName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *firstName; // ivar: _firstName
@property (readonly, copy) NSString *formattedName; // ivar: _formattedName
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isCompany; // ivar: _isCompany
@property (readonly) NSString *lastName; // ivar: _lastName
@property (readonly) NSString *middleName; // ivar: _middleName
@property (readonly) NSString *suffix; // ivar: _suffix
@property (readonly) Class superclass;
@property (readonly) NSString *title; // ivar: _title


+(id)components;
+(id)componentsWithFirstName:(id)arg0 lastName:(id)arg1 middleName:(id)arg2 title:(id)arg3 suffix:(id)arg4 companyName:(id)arg5 isCompany:(BOOL)arg6 ;


@end


#endif