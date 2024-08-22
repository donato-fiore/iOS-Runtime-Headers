// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPIMPORTITEMERROR_H
#define FPIMPORTITEMERROR_H

@class NSError, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FPImportItemError : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSInteger retryCount; // ivar: _retryCount


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemIdentifier:(id)arg0 error:(id)arg1 retryCount:(NSInteger)arg2 ;
-(id)json;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif