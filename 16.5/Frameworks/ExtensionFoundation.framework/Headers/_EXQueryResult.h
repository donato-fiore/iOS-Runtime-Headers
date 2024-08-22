// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXQUERYRESULT_H
#define _EXQUERYRESULT_H

@class NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_EXExtensionAvailablility.h"

@interface _EXQueryResult : NSObject <NSSecureCoding>



@property (readonly) _EXExtensionAvailablility *availablility; // ivar: _availablility
@property (readonly) NSSet *identities; // ivar: _identities


+(BOOL)supportsSecureCoding;
-(id)_initWithIdentities:(id)arg0 availablility:(id)arg1 ;
-(id)initWithAvailablility:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentities:(id)arg0 ;
-(id)initWithIdentities:(id)arg0 availablility:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif