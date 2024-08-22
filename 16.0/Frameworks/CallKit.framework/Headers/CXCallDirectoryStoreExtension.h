// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCALLDIRECTORYSTOREEXTENSION_H
#define CXCALLDIRECTORYSTOREEXTENSION_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CXCallDirectoryStoreExtension : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger primaryKey; // ivar: _primaryKey
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) NSDate *stateLastModified; // ivar: _stateLastModified


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif